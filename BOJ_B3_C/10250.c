#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, h, w, i;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d %d", &h, &w, &i);
		i--;
		printf("%d\n", (i % h + 1) * 100 + i / h + 1);
	}
	return 0;
}