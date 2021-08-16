#include <stdio.h>
#include <stdlib.h>

int main() {
	int t, d, n, c = 0;
	scanf("%d", &t);
	for (int i = 1; i < t + 1; i++) {
		n = i;
		d = n % 10 - (int)(n / 10) % 10;
		while (n > 0) {
			if (d != n % 10 - (int)(n / 10) % 10)
				break;
			n /= 10;
		}
		c += n < 10;
	}
	printf("%d", c);
	return 0;
}