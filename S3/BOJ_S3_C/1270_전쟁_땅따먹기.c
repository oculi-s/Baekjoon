#include <stdio.h>
#include <stdlib.h>

typedef long long ld;

int _c(ld* a, ld* b) {
	if (*a == *b)
		return 0;
	else if (*a > *b)
		return 1;
	else
		return -1;
}

int t, n, i, e, c;
ld x[100001];
int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i = 0; i < n; i++)
			scanf("%lld", x + i);
		qsort(x, n, sizeof(ld), _c);
		c = 1;
		for (i = 1; i < n; i++)
			if (x[i] == x[i - 1]) {
				c++;
				if (c > n / 2) {
					printf("%lld\n", x[i]);
					break;
				}
			}
			else
				c = 1;
		if (i == n)
			printf("SYJKGW\n");
	}
	return 0;
}