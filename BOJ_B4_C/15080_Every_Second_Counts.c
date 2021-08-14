#include <stdio.h>

int main() {
	int a, b, c, d, e, f, g;
	scanf("%d : %d : %d\n%d : %d : %d", &a, &b, &c, &d, &e, &f);
	g = d * 3600 + e * 60 + f - a * 3600 - b * 60 - c;
	printf("%d", g > 0 ? g : g + 24 * 3600);
	return 0;
}