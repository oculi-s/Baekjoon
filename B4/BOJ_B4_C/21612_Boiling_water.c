#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	printf("%d\n%d", 5 * a - 400, a > 100 ? -1 : a == 100 ? 0 : 1);
	return 0;
}