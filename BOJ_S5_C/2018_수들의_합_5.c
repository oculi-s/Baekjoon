#include <stdio.h>

int main() {
	int n, a = 1, b = 2, c = 1, s = 3;
	scanf("%d", &n);
	while (b <= n / 2 + 1) {
		if (s == n)
			c++, s -= a++;
		else if (s > n)
			s -= a++;
		else if (s < n)
			s += ++b;
	}
	printf("%d", c);
}