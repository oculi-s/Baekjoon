#include <stdio.h>
#include <stdlib.h>

int main() {
	double x, y, z, v;
	scanf("%lf %lf", &x, &y);
	z = (int)(y * 100 / x);
	if (x == 0 && y == 0)
		printf("%d", 1);
	else if (x == y || z == 99)
		printf("%d", -1);
	else {
		v = (int)(((z + 1) * x - 100 * y) / (99 - z));
		while ((int)((y + v) * 100 / (x + v)) <= z)
			v++;
		printf("%d", (int)v);
	}
	return 0;
}