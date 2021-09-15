#include <stdio.h>
#define D 1000000009

unsigned int t, n, i, j, c[1000001];
int main() {
	scanf("%d", &t);
	c[1] = 1, c[2] = 2, c[3] = 4;
	for (i = 4; i <= 1000000; i++)
		c[i] = (c[i - 1] + c[i - 2] + c[i - 3]) % D;
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", c[n]);
	}
	return 0;
}