#include <stdio.h>

int main() {
	short x[3], y[3];
	scanf("%hd %hd\n%hd %hd\n%hd %hd", x, y, x + 1, y + 1, x + 2, y + 2);
	if (x[0] == x[1])
		printf("%hd ", x[2]);
	else
		printf("%hd ", x[0] == x[2] ? x[1] : x[0]);
	if (y[0] == y[1])
		printf("%hd", y[2]);
	else
		printf("%hd", y[0] == y[2] ? y[1] : y[0]);
	return 0;
}