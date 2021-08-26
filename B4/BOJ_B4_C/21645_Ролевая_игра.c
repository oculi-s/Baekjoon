#include <stdio.h>

int n, m, k;
int main() {
	scanf("%d %d %d", &n, &m, &k);
	if (m >= k)
		printf("%d", n * (m / k + k - 1));
	else
		printf("%d", n * m);
	return 0;
}