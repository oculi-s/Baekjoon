#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define M 50001

void _sum(char a[M], char b[M], char* c, int m, int n) {
	int u = 0, l, t;
	l = 1 + (m > n ? m : n), c[l] = 0;
	while (l) {
		t = u;
		if (m)
			t += a[--m] - 48;
		if (n)
			t += b[--n] - 48;
		c[--l] = t % 10 + 48, u = t >= 10;
	}
}

int main() {
	int m, n, u, p, i, f = 0, s;
	char* a = malloc(sizeof(char) * M);
	char* b = malloc(sizeof(char) * M);
	char* c = malloc(sizeof(char) * 2 * M);
	char d[2 * M + 1] = "0";
	char* e = malloc(sizeof(char) * 2 * M);
	scanf("%d %d", &m, &n);
	scanf("%s\n%s", a, b);
	while (m) {
		m--, f++;
		if (a[m] != '0') {
			c[n + f] = 0, u = 0, s = f;
			for (i = 0; i < f; i++)
				c[n + i] = '0';
			for (i = n; i > 0; i--)
				p = u + (a[m] - 48) * (b[i - 1] - 48), c[i] = p % 10 + 48, u = p / 10;
			c[i] = u + 48;
			while (c[0] == '0')
				c++, s--;

			i = -1;
			while (d[++i]);
			_sum(c, d, e, n + s, i);
			e += e[0] == '0';

			i = 0;
			while (e[i])
				d[i] = e[i], i++;
			d[i] = 0, c[0] = 0;
		}
	}
	if (e[0] == 0)
		printf("0\n");
	else
		printf("%s", e);
}