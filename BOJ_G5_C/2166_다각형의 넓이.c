#include <stdio.h>
#include <math.h>

int main() {
	int n, i;
	scanf("%d", &n);
	double x0, y0, x1, y1, x2, y2, s = 0;
	scanf("%lf %lf", &x0, &y0);
	scanf("%lf %lf", &x1, &y1);
	for (i = 0; i < n - 2; i++) {
		scanf("%lf %lf", &x2, &y2);
		s += (x0 * y1 + x1 * y2 + x2 * y0) - (x1 * y0 + x0 * y2 + x2 * y1);
		x1 = x2, y1 = y2;
	}
	s = s > 0 ? s : -s;
	printf("%.1lf", round(s * 5) / 10);
	return 0;
}