#include <stdio.h>

int main() {
	int n, t, i = 5, a = 0;
	scanf("%d", &n);
	while (i--)
		scanf("%d", &t), a += t == n;
	printf("%d", a);
	return 0;
}