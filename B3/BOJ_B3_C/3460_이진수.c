#include <stdio.h>

int t, n, l;
int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n), l = 0;
		while (n) {
			if (n % 2)
				printf("%d ", l);
			n /= 2, l++;
		}
		printf("\n");
	}
	return 0;
}