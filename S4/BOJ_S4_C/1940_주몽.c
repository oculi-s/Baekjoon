#include <stdio.h>

int n, m, i, j, c, x[15000];
int main() {
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%d", x + i);
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (x[i] + x[j] == m)
				c++;
	printf("%d", c);
	return 0;
}