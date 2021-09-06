#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int c, m, i, j, t, b[10], s[10], n, l;

int _log(int n) {
	if (!n)
		return 1;
	else
		return log10(n) + 1;
}

void _rec(int v, int t) {
	int i;
	if (t)
		m = t + abs(c - v) < _log(m) + abs(c - m) ? v : m;
	if (t <= l)
		for (i = 0; i < n; i++)
			_rec(10 * v + s[i], t + 1);
}

int main() {
	scanf("%d\n%d", &c, &m);
	while (m--)
		scanf("%d", &t), b[t] = 1;
	m = 1e9, l = _log(c);
	for (i = 0; i < 10; i++)
		if (!b[i])
			s[n] = i, n++;
	_rec(0, 0);
	if (abs(c - 100) < _log(m) + abs(c - m))
		printf("%d", abs(c - 100));
	else
		printf("%d", _log(m) + abs(c - m));
	return 0;
}