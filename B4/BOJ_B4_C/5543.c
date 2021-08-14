#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, e;
	scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);
	printf("%d", (a < b&& a < c ? a : b < c ? b : c) + (d < e ? d : e) - 50);
	return 0;
}