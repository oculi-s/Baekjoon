#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, e, f, g, h;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	g = abs(a - e) > abs(b - f) ? abs(a - e) : abs(b - f);
	h = abs(c - e) + abs(d - f);
	printf("%s", g < h ? "bessie" : g > h ? "daisy" : "tie");
	return 0;
}