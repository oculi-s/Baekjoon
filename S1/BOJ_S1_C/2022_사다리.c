#include <stdio.h>
#include <math.h>

double x, y, c, d, l, r, m;

double _v(double m) {
	return c * (tan(asin(m / x)) + tan(asin(m / y)));
}

int main() {
	scanf("%lf %lf %lf", &x, &y, &c);
	l = 0, r = x < y ? x : y;
	while (r - l >= 0.001) {
		m = (l + r) / 2;
		if (_v(m) > m)
			r = m;
		else
			l = m;
	}
	printf("%.3lf", m);
}
