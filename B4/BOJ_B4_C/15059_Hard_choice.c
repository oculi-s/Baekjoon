#include <stdio.h>

int main() {
	int a, b, c, d, e, f;
	scanf("%d %d %d\n%d %d %d", &a, &b, &c, &d, &e, &f);
	printf("%d", (d > a ? d - a : 0) + (e > b ? e - b : 0) + (f > c ? f - c : 0));
	return 0;
}