#include <stdio.h>

int main() {
	int a, t, i = 5, n = 0;
	scanf("%d", &a);
	while (i--)
		scanf("%d", &t), n += t == a;
	printf("%d", n);
	return 0;
}