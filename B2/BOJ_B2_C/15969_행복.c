#include <stdio.h>

int n, t, a, b = 1000;
int main() {
	scanf("%d", &n);
	while (n--)
		scanf("%d", &t), a = a > t ? a : t, b = b < t ? b : t;
	printf("%d", a - b);
	return 0;
}