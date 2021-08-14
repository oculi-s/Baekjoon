#include <stdio.h>
#include <stdlib.h>

typedef unsigned int ui;

int main() {
	ui m, n, i, j;
	scanf("%u %u", &m, &n);
	char* a = malloc(sizeof(char) * m);
	char* b = malloc(sizeof(char) * n);
	char* c = malloc(sizeof(char) * (m + n + 3));
	ui* d = malloc(sizeof(int) * (m + n + 1));
	scanf("%s\n%s", a, b);
	m--, n--;
	for (i = 0; i <= m + n; i++)
		d[i] = 0;
	for (i = 0; i <= m; i++)
		for (j = 0; j <= n; j++)
			d[i + j] += (a[i] - 48) * (b[j] - 48);
	c[m + n + 2] = 0;
	for (i = m + n; i > 0; i--)
		c[i + 1] = d[i] % 10 + 48, d[i - 1] += d[i] / 10;
	c[1] = d[0] % 10 + 48, c[0] = d[0] / 10 + 48;
	c += (c[0] == '0');
	if (c[0] == '0')
		printf("0");
	else
		printf("%s", c);
}