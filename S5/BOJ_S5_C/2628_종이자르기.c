#include <stdio.h>
#include <stdbool.h>

bool p[2][101];
int main() {
	int a, b, n, c, d, i, x;
	scanf("%d %d\n%d", &a, &b, &n);
	for (i = 0; i < n; i++)
		scanf("%d %d", &c, &d), p[c][d] = 1;
	p[1][a] = 1, p[0][b] = 1;
	for (i = 1, c = 0, x = 1; i <= a; i++)
		if (p[1][i])
			c = c > x ? c : x, x = 1;
		else
			x++;
	for (i = 1, d = 0, x = 1; i <= b; i++)
		if (p[0][i])
			d = d > x ? d : x, x = 1;
		else
			x++;
	printf("%d", c * d);
	return 0;
}