#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 0;
	int y;
	scanf_s("%d", &y);
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
		a = 1;
	}
	printf("%d", a);
	return 0;
}