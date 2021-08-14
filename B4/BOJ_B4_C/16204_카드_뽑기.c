#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	printf("%d", n - abs(m - k));
	return 0;
}