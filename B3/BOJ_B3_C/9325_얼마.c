#include <stdio.h>

int t, n, i, a, b, c;
int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d\n%d", &a, &n);
		for (i = 0; i < n; i++)
			scanf("%d %d", &b, &c), a += b * c;
		printf("%d\n", a);
	}
	return 0;
}