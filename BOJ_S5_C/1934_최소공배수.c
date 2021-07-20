#include <stdio.h>

int main() {
	int t, a, b, m, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &a, &b);
		m = a * b;
		n = a > b ? a : b;
		b = a < b ? a : b;
		a = n;
		while (a % b)
			n = b, b = a % b, a = n;
		printf("%d\n", m / b);
	}
}