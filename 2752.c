#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, e, f;
	scanf("%d %d %d", &a, &b, &c);
	d = ((a < b) && (a < c)) ? a : (b < c ? b : c);
	f = ((a > b) && (a > c)) ? a : (b > c ? b : c);
	e = ((f > b) && (b > d)) ? b : (((f > a) && (a > d)) ? a : c);
	printf("%d %d %d", d, e, f);
	return 0;
}