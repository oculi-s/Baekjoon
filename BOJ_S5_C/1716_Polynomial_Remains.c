#include <stdio.h>

int main() {
	int n, k, i, a[10000];
	scanf("%d %d", &n, &k);
	while (n != -1 && k != -1) {
		for (i = n; i >= 0; i--)
			scanf("%d", a + i);
		if (k > n) {
			for (i = n; i >= 0; i--)
				printf("%d ", a[i]);
			printf("\n");
		}
		else if (k == 0)
			printf("0\n");
		else {
			i = 0;
			while (i <= n - k)
				a[i + k] -= a[i], a[i] = 0, i++;
			for (i = n; i > n - k; i--)
				printf("%d ", a[i]);
			printf("\n");
		}
		scanf("%d %d", &n, &k);
	}
	return 0;
}