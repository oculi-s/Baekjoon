#include <stdio.h>

int n, x[13], i, a[6], j;
int main() {
	scanf("%d", &n);
	while (n) {
		for (i = 0; i < n; i++)
			scanf("%d", x + i);
		for (a[0] = 0; a[0] < n - 5; a[0]++)
			for (a[1] = a[0] + 1; a[1] < n - 4; a[1]++)
				for (a[2] = a[1] + 1; a[2] < n - 3; a[2]++)
					for (a[3] = a[2] + 1; a[3] < n - 2; a[3]++)
						for (a[4] = a[3] + 1; a[4] < n - 1; a[4]++)
							for (a[5] = a[4] + 1; a[5] < n; a[5]++) {
								for (j = 0; j < 6; j++)
									printf("%d ", x[a[j]]);
								printf("\n");
							}
		printf("\n");
		scanf("%d", &n);
	}
	return 0;
}