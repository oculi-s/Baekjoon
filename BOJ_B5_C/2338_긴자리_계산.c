#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define M 1001

char a[M], b[M], c[2 * M] = { 0, };

void _sum(char* a, char* b, char* c, int m, int n, int d) {
	int u = 0, l, t;
	l = 1 + (m > n ? m : n), c[l] = 0, d = d ? 1 : -1;
	while (l) {
		t = u * d, l--;
		if (m)
			m--, t += a[m] - 48;
		if (n)
			n--, t += (b[n] - 48) * d;
		if (d == 1)
			c[l] = t % 10 + 48, u = t >= 10;
		else
			c[l] = (t + 10) % 10 + 48, u = t < 0;
	}
}

void _mul(char* a, char* b, int m, int n) {
	n--, m--;
	int* d = malloc(sizeof(int) * (m + n + 1));
	int i, j;
	for (i = 0; i <= m + n; i++)
		d[i] = 0;
	for (i = 0; i <= m; i++)
		for (j = 0; j <= n; j++)
			d[i + j] += (a[i] - 48) * (b[j] - 48);
	c[n + m + 2] = 0;
	for (i = n + m; i > 0; i--)
		c[i + 1] = d[i] % 10 + 48, d[i - 1] += d[i] / 10;
	c[1] = d[0] % 10 + 48, c[0] = d[0] / 10 + 48, i = 0;
	if (c[0] == '0' && c[1] == '0')
		printf("0");
	else
		printf("%s", c + (c[0] == '0'));
}

void _dosum(char* a, char* b, char* c, int m, int n, bool ma, bool mb, bool L) {
	if (L)
		_sum(a, b, c, m, n, (ma && mb) || (!ma && !mb));
	else
		_sum(b, a, c, n, m, (ma && mb) || (!ma && !mb));
	while (c[0] == '0') { c++; }
	if (c[0]) {
		if ((ma && mb) || (L && ma) || (!L && mb))
			printf("-");
		printf("%s\n", c + (c[0] == '0'));
	}
	else
		printf("0\n");
}

int main() {
	scanf("%s\n%s", a, b);
	bool ma = a[0] == '-', mb = b[0] == '-', L;
	int m = 0, n = 0, t = 0;
	while (a[++m]);
	while (b[++n]);
	m -= ma, n -= mb, L = m >= n;
	if (m == n) {
		while (a[ma + t] == b[mb + t] && (t < m || t < n))
			t++;
		L = a[ma + t] >= b[mb + t];
	}
	_dosum(a + ma, b + mb, c, m, n, ma, mb, L);
	_dosum(a + ma, b + mb, c, m, n, ma, b[0] == '0' ? mb : !mb, L);
	if ((!ma && mb && a[0] != '0') || (ma && !mb && b[0] != '0'))
		printf("-");
	_mul(a + ma, b + mb, m, n);
}