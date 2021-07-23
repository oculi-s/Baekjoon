#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define M 2000
#define N 2*M+20

void _dup(char* a, char* b, int n) {
	int i;
	a[n] = 0;
	for (i = 0; i < n; i++)
		a[i] = b[i];
}

void _sum(char* a, char* b, char* c, int m, int n, int d) {
	int u = 0, l, t;
	l = 1 + (m > n ? m : n), c[0] = '0', c[l] = 0;
	d = d ? 1 : -1;
	while (l > 1) {
		l--, t = d * u;
		if (m > 0)
			t += a[--m] - 48;
		if (n > 0)
			t += (b[--n] - 48) * d;
		c[l] = (d == 1 ? t % 10 : (t < 0 ? t + 10 : t)) + 48;
		u = d == 1 ? t >= 10 : t < 0;
	}
	if (d == -1 && u)
		c[l] = 10 - (c[l] - 48) + 48;
	if (d == 1 && u)
		c[0] = '1';
}

void _dosum(char* a, char* b, char* c, int m, int n, bool ma, bool mb, bool L) {
	int i = -1;

	if ((ma && mb) || (L && ma) || (!L && mb))
		printf("-");

	if (a[0] == '0' && b[0] == '0')
		printf("0\n");
	else if (a[0] == '0')
		printf("%s\n", b);
	else if (b[0] == '0')
		printf("%s\n", a);
	else {
		if (L)
			_sum(a, b, c, m, n, (ma && mb) || (!ma && !mb));
		else
			_sum(b, a, c, n, m, (ma && mb) || (!ma && !mb));
		while (c[++i] == '0');
		if (c[i]) {
			i = -1;
			while (c[++i] == '0');
			while (c[i])
				printf("%c", c[i++]);
			printf("\n");
		}
		else
			printf("0\n");
	}
}

void _mul(char* a, char* b, char* c, int m, int n, bool ma, bool mb) {
	if (a[0] == '0' || b[0] == '0')
		printf("0\n");
	else {
		int u, p, i, f = 0, s, t, l;
		char d[N];
		char* e = malloc(sizeof(char) * N);
		d[0] = 0, t = m;
		while (t) {
			t--, f++, c[0] = 0, c[n + f] = 0, u = 0, s = 0;
			if (a[t] != '0') {
				for (i = 0; i < f; i++)
					c[n + i] = '0';
				for (i = n; i > 0; i--)
					p = u + (a[t] - 48) * (b[i - 1] - 48), c[i] = p % 10 + 48, u = p / 10;
				c[i] = u + 48;
				s = -1;
				while (c[++s] == '0');

				l = -1;
				while (d[++l]);
				_sum(c + s, d, e, n + f - s, l, 1);
				l = -1;
				while (e[++l]);
				_dup(d, e, l);
			}
		}
		i = -1;
		while (e[++i] == '0');
		if ((!ma && mb) || (ma && !mb))
			printf("-");
		while (e[i])
			printf("%c", e[i++]);
		printf("\n");
	}
}

int main() {
	char a[M], b[M];
	char* c = malloc(sizeof(char) * N);
	scanf("%s\n%s", a, b);
	bool ma = a[0] == '-', mb = b[0] == '-', L;
	int m = 0, n = 0, t = 0;
	while (a[++m]);
	while (b[++n]);
	m -= ma, n -= mb, L = m >= n;
	if (m == n) {
		while (a[ma + t] >= b[mb + t] && (t < m || t < n))
			t++;
		L = a[ma + t] >= b[mb + t];
	}
	_dosum(a + ma, b + mb, c, m, n, ma, mb, L);
	_dosum(a + ma, b + mb, c, m, n, ma, b[0] != '0' ? !mb : mb, L);
	_mul(a + ma, b + mb, c, m, n, ma, mb);
}