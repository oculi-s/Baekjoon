#include <stdio.h>

int a, b, m, n, s;
int main() {
	scanf("%d %d", &m, &n);
	while (a * a < m)
		a++;
	b = a--;
	while (b * b < n)
		b++;
	b -= b * b != n;
	if (a == b)
		printf("-1");
	else
		printf("%d\n%d", b * (b + 1) * (2 * b + 1) / 6 - a * (a + 1) * (2 * a + 1) / 6, (a+1) * (a+1));
	return 0;
}