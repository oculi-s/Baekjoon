#include <stdio.h>

int count(int n) {
	int c = n == 0;
	while (n)
		c += !(n % 10), n /= 10;
	return c;
}

int t, a, b, c, n, i;
int main() {
	scanf("%d", &t);
	while (t--) {
		n = 10, c = 0;
		scanf("%d %d", &a, &b);
		for (i = a; i <= b; i++)
			c += count(i);
		printf("%d\n", c);
	}
	return 0;
}