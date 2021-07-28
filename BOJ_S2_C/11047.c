#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, k, * s, i, j;
	scanf("%d %d", &n, &k);
	s = malloc(sizeof(int) * 1000000);
	for (i = 0; i < n; i++) {
		scanf("%d", s + i);
		if (*(s + i) > k) {
			*(s + i) = NULL;
			break;
		}
	}
	int c = 0;
	for (j = i - 1; j >= 0; j--) {
		c += k / s[j];
		k %= s[j];
	}
	printf("%d", c);
	return 0;
}