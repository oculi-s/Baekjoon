#include <stdio.h>

int _heap[200002], e, n, i, c;

void _swap(int *a, int *b) {
	int t = *a;
	*a = *b, *b = t;
}

void _heap_push(int x) {
	int i = ++e;
	_heap[i] = x;
	while (_heap[i / 2] < _heap[i] && i >= 2)
		_swap(&_heap[i / 2], &_heap[i]), i /= 2;
}

int _heap_pop() {
	if (!e)
		return 0;
	int i = 1, m, v = _heap[1];
	_heap[1] = _heap[e], _heap[e] = 0, e--;
	m = _heap[i * 2] > _heap[i * 2 + 1] ? i * 2 : i * 2 + 1;
	while (_heap[i] < _heap[m]) {
		_swap(&_heap[i], &_heap[m]), i = m;
		m = _heap[i * 2] > _heap[i * 2 + 1] ? i * 2 : i * 2 + 1;
	}
	return v;
}

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &c);
		if (c)
			_heap_push(c);
		else
			printf("%d\n", _heap_pop());
	}
	return 0;
}