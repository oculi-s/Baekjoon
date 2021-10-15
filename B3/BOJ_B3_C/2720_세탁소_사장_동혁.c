#include <stdio.h>

int n, x, c, r[4] = {25, 10, 5, 1}, i, j;
int main() {
	scanf("%d\n", &n);
	while (n--) {
		scanf("%d", &x);
		for (i = 0; i < 4; i++)
			printf("%d ", x / r[i]), x %= r[i];
		printf("\n");
	}
	return 0;
}