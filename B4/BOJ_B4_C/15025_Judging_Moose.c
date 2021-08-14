#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (!(a + b))
		printf("Not a moose");
	else
		printf("%s %d", a == b ? "Even" : "Odd", a == b ? a * 2 : (a > b ? a : b) * 2);
	return 0;
}