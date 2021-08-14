#include <stdio.h>

int main() {
	unsigned long long a = 0, b = 0, t;
	char p[30], q[30], c[60];
	int i, l;
	for (i = 0; i < 30; i++)
		p[i] = 0, q[i] = 0;
	scanf("%s\n%s", p, q);
	l = 0;
	while (p[l++]);
	l--, t = 1;
	for (i = l - 1; i >= 0; t *= 2, i--)
		if (p[i] == '1')
			a += t;
	l = 0;
	while (q[l++]);
	l--, t = 1;
	for (i = l - 1; i >= 0; t *= 2, i--)
		if (q[i] == '1')
			b += t;
	a *= b, l = 0;
	while (a)
		c[l] = a % 2, a /= 2, l++;
	for (i = l - 1; i >= 0; i--)
		printf("%d", c[i]);
	return 0;
}