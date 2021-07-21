#include <stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", (y / (y - x) + (y % (y - x) != 0)));
	return 0;
}