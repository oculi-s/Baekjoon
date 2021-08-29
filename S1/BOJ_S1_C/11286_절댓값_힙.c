#include <stdio.h>
#include <stdlib.h>
#define M 2147483647

int _h[200002], _s[200002], e, n, i, c;

void _swap(int* a, int* b) {
	int t = *a;
	*a = *b, * b = t;
}

void _h_push(int x) {
	int i = ++e;
	_h[i] = abs(x), _s[i] = x >= 0;
	while (_h[i / 2] > _h[i] && i >= 1)
		_swap(&_h[i / 2], &_h[i]), _swap(&_s[i / 2], &_s[i]), i /= 2;
	while (_h[i / 2] == _h[i] && _s[i / 2] > _s[i] && i >= 1)
		_swap(&_h[i / 2], &_h[i]), _swap(&_s[i / 2], &_s[i]), i /= 2;
}

int _next(int i) {
	if (_h[i*2] == _h[i*2+1])
		return _s[i * 2] < _s[i * 2 + 1] ? i * 2 : i * 2 + 1;
	else
		return _h[i * 2] < _h[i * 2 + 1] ? i * 2 : i * 2 + 1;
}

int _h_pop() {
	if (!e)
		return 0;
	int i = 1, m, v = _h[1];
	if (!_s[1])
		v *= -1;
	_h[1] = _h[e], _s[1] = _s[e], _h[e] = M, _s[e] = 2, e--;
	m = _next(i);
	while (_h[i] > _h[m]) {
		_swap(&_h[i], &_h[m]), _swap(&_s[i], &_s[m]), i = m;
		m = _next(i);
	}
	while (_h[i] == _h[m] && _s[i] > _s[m]) {
		_swap(&_h[i], &_h[m]), _swap(&_s[i], &_s[m]), i = m;
		m = _next(i);
	}
	return v;
}

int main() {
	scanf("%d", &n);
	for (i = 1; i < 2 * n + 1; i++)
		_h[i] = M, _s[i] = 2;
	for (i = 0; i < n; i++) {
		scanf("%d", &c);
		if (c)
			_h_push(c);
		else
			printf("%d\n", _h_pop());
	}
	return 0;
}