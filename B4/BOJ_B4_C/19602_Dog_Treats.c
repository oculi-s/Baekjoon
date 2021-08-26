#include <stdio.h>

int a, b, c;
int main() {
	scanf("%d\n%d\n%d", &a, &b, &c);
	printf("%s", a + 2 * b + 3 * c >= 10 ? "happy" : "sad");
	return 0;
}