#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 50000;

double _dist(double xa, double ya, double xb, double yb) {
	return sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
}

int main() {
	double xa, ya, xb, yb, xc, yc;
	scanf("%lf %lf %lf %lf %lf %lf", &xa, &ya, &xb, &yb, &xc, &yc);
	if ((xa == xb && xb == xc) || (ya == yb && yb == yc)) {
		printf("%.1f", -1.0);
		return 0;

	}
	else if ((yb - ya) / (xb - xa) == (yc - ya) / (xc - xa)) {
		printf("%.1f", -1.0);
		return 0;
	}
	double ab, bc, ca, m, n;
	ab = _dist(xa, ya, xb, yb);
	bc = _dist(xb, yb, xc, yc);
	ca = _dist(xc, yc, xa, ya);
	m = ab > bc && ab > ca ? ab : bc > ca ? bc : ca;
	n = ab < bc && ab < ca ? ab : bc < ca ? bc : ca;
	printf("%.12lf", (m - n) * 2);
	return 0;
}