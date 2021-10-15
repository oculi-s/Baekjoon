#include <stdio.h>
#include <string.h>

char a[10010], b[10010];
long long i, j, c, n, m;
int main() {
	scanf("%s %s", a, b);
	n = strlen(a), m = strlen(b);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			c += (a[i] - '0') * (b[j] - '0');
	printf("%lld", c);
	return 0;
}