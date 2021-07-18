#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	if (a == b) {
		printf("%s", "==");
	}
	else {
		printf("%s", a > b ? ">" : "<");
	}
	return 0;
}