#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;
	scanf_s("%d", &a);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", a, i, a * i);
	}
	return 0;
}