#include <stdio.h>

int a, b;
int main() {
	scanf("%d %d", &a, &b);
	a *= 7, b *= 13;
	printf("%s", a == b ? "lika" : a < b ? "Petra" : "Axel");
	return 0;
}