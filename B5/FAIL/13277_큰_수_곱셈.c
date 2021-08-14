#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define M 300001

void _dup(char* a, char* b) {
	int i, n = 0;
	while (b[n++]);
	n--, a[n] = 0;
	for (i = 0; i < n; i++)
		a[i] = b[i];
}

void _sum(char a[M], char b[M], char* c, int m, int n, int d) {
	int u = 0, l, t;
	l = m > n ? m : n, c[l] = 0;
	d = d ? 1 : -1;
	while (l) {
		t = d * u;
		if (m)
			m--, t += a[m] - 48;
		if (n)
			n--, t += (b[n] - 48) * d;
		l--, c[l] = (d ? t % 10 : (t < 0 ? t + 10 : t)) + 48;
		u = d ? t >= 10 : t < 0;
	}
}

void _mul(char a[M], char b[M], char* c, bool ma, bool mb) {
	int u, m = 0, n = 0, p, i, f = 0, t;
	char d[2 * M + 1], * e = malloc(sizeof(char) * (2 * M + 1));
	while (a[++m]);
	while (b[++n]);
	d[0] = 0, t = m;
	while (t) {
		t--, f++, c[n + f] = 0, u = 0;
		if (a[t] != '0') {
			for (i = 0; i < f; i++)
				c[n + i] = '0';
			for (i = n; i > 0; i--)
				p = u + (a[t] - 48) * (b[i - 1] - 48), c[i] = p % 10 + 48, u = p / 10;
			c[i] = u + 48;
			while (c[0] == '0')
				c++;
		}
		_sum(c, d, e, m, n, 1), _dup(d, e), c[0] = 0;
	}
	while (e[0] == '0')
		e++;
	if (e[0] == 0)
		printf("0\n");
	else
		printf("%c%s", (!ma && mb) || (ma && !mb) ? '-' : 0, e);
}

int main() {
	char* a = malloc(sizeof(char) * M);
	char* b = malloc(sizeof(char) * M);
	char* c = malloc(sizeof(char) * 2 * M);
	scanf("%s %s", a, b);
	bool ma = a[0] == '-', mb = b[0] == '-', L;
	int m = 0, n = 0, t = 0;
	while (a[m++]);
	while (b[n++]);
	m -= ma, n -= mb, L = m >= n;
	if (m == n) {
		while (a[ma + t] >= b[mb + t])
			t++;
		L = a[ma + t] >= b[mb + t];
	}
	_mul(a + ma, b + mb, c, ma, mb);
}