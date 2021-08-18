#include <stdio.h>
#include <stdbool.h>
#define N 64

typedef long long ld;
ld n[N], p[N], a, b, i, s, t, l;

void _rec(ld* t, ld a, ld l, ld c, ld* s) {
	if (*t != a && l) {
		if (*t - p[l] <= a)
			_rec(t, a, l - 1, c + 1, s);
		else {
			*s -= n[l] + (c - 1) * p[l];
			*t -= p[l];
			_rec(t, a, l, c - 1, s);
		}
	}
}

int main() {
	scanf("%lld %lld", &a, &b);
	n[1] = 1, p[1] = 1;
	for (i = 2; i < N; i++)
		n[i] = n[i - 1] * 2 + p[i - 1], p[i] = p[i - 1] * 2;
	l = 1;
	while (p[l] < a)
		l++;
	t = p[l], _rec(&t, a - 1, l, 0, &s);
	s = -s;
	while (p[l] <= b)
		s += n[l], l++;
	t = p[l], _rec(&t, b, l, 0, &s);
	printf("%lld", s);
	return 0;
}