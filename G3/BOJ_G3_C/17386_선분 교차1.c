#include <stdio.h>

double x1, x2, x3, x4, y1, y2, y3, y4, d1, d2, d3, d4;

double _min(double x1, double x2) {
	return x1 < x2 ? x1 : x2;
}
double _max(double x1, double x2) {
	return x1 > x2 ? x1 : x2;
}

int main() {
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	scanf("%lf %lf %lf %lf", &x3, &y3, &x4, &y4);

	d1 = (y2 - y1) * (x3 - x1) - (y3 - y1) * (x2 - x1);
	d2 = (y2 - y1) * (x4 - x1) - (y4 - y1) * (x2 - x1);
	d3 = (y4 - y3) * (x1 - x3) - (y1 - y3) * (x4 - x3);
	d4 = (y4 - y3) * (x2 - x3) - (y2 - y3) * (x4 - x3);
	if (d1 * d2 == 0 && d3 * d4 == 0) {
		if (x1 == x2) {
			if (_min(y1, y2) <= _min(y3, y4) && _min(y3, y4) <= _max(y1, y2))
				printf("1");
			else if (_min(y3, y4) <= _min(y1, y1) && _min(y1, y2) <= _max(y3, y4))
				printf("1");
			else
				printf("0");
		}
		else {
			if (_min(x1, x2) <= _min(x3, x4) && _min(x3, x4) <= _max(x1, x2))
				printf("1");
			else if (_min(x3, x4) <= _min(x1, x2) && _min(x1, x2) <= _max(x3, x4))
				printf("1");
			else
				printf("0");
		}
	}
	else
		printf("%d", d1 * d2 <= 0 && d3 * d4 <= 0);
	return 0;
}
