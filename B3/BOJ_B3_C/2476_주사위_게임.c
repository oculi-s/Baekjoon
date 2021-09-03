#include <stdio.h>

int a, b, c, n, m, v;
int main() {
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == b && b == c)
			v = 10000 + a * 1000;
		else if (a == b || c == a)
			v = 1000 + a * 100;
		else if (b == c)
			v = 1000 + b * 100;
		else if (a > b && a > c)
			v = a * 100;
		else if (b > c)
			v = b * 100;
		else
			v = c * 100;
		m = m > v ? m : v;
	}
	printf("%d", m);
	return 0;
}