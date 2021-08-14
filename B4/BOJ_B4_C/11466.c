#include <stdio.h>
double _max(double a, double b) {
	return a > b ? a : b;
}
double _min(double a, double b) {
	return a < b ? a : b;
}
int main() {
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%.10lf", _max(_min(_max(a, b) / 3, _min(a, b)), _min(a, b) / 2));
	return 0;
}