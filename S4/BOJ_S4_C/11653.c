#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 2; i < n + 1; i++) {
		while (n % i == 0) {
			printf("%d\n", i);
			n /= i;
		}
	}
	return 0;
}