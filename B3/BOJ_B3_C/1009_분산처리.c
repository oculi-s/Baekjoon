#include <stdio.h>

int main() {
	int t, i, j, a, b, c;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &a, &b);
		c = 1;
		while (b--)
			c *= a, c %= 10;
		printf("%d\n", c ? c : 10);
	}
	return 0;
}