#include <stdio.h>

double _comb(double n, double k) {
	if (n < k || n <= 0 || k < 0)
		return 0;
	double t = 1;
	while (k)
		t *= (n - k + 1) / k, k--;
	return t;
}

int main() {
	double r, c, w, i, s = 0;
	scanf("%lf %lf %lf", &r, &c, &w);
	for (i = c - 1; i < c + w - 1; i++)
		s += _comb(r + w - 1, i);
	for (i = r - 1; i < r + w - 1; i++)
		s -= _comb(i, c - 2);
	printf("%.0lf", s);
	return 0;
}