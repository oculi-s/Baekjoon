#include <stdio.h>

int c[151], i, t, s, a, d[9];
int main() {
	for (; i < 8; i++)
		scanf("%d", &t), c[t] = i + 1;
	for (i = 150; i >= 0; i--)
		if (c[i] && a < 5)
			s += i, a++;
	printf("%d\n", s);
	a = 0;
	for (i = 150; i >= 0; i--)
		if (c[i] && a < 5)
			d[c[i]] = 1, a++;
	for (i = 1; i <= 8; i++)
		if (d[i])
			printf("%d ", i);
	return 0;
}