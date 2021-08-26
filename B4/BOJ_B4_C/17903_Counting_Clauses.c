#include <stdio.h>

int a, b;
int main() {
	scanf("%d %d", &a, &b);
	printf("%s", a >= 8 ? "satisfactory" : "unsatisfactory");
	return 0;
}