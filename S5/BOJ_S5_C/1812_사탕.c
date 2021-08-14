#include <stdio.h>

int main() {
	int n, i, s[1000], a1 = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", s + i), a1 += i % 2 ? -s[i] : s[i];
	a1 /= 2;
	printf("%d\n", a1);
	printf("%d\n", s[0] - a1), s[0] -= a1;
	for (i = 1; i < n - 1; i++)
		printf("%d\n", s[i] - s[i - 1]), s[i] -= s[i - 1];
}