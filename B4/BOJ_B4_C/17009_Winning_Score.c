#include <stdio.h>

int a, b, c, d, e, f;
int main() {
	scanf("%d\n%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e, &f);
	printf("%s", 3 * a + 2 * b + c == 3 * d + 2 * e + f ? "T" : 3 * a + 2 * b + c > 3 * d + 2 * e + f ? "A" : "B");
	return 0;
}