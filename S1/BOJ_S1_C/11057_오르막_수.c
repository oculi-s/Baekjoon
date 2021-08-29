#include <stdio.h>

int x[10], n, i, s;
int main() {
	scanf("%d", &n);
	for (i = 0; i < 10; i++)
		x[i] = 1;
	while (--n) {
		for (i = 1; i < 10; i++)
			x[i] += x[i - 1], x[i] %= 10007;
	}
	for (i = 0; i < 10; i++)
		s += x[i], s %= 10007;
	printf("%d", s);
	return 0;
}