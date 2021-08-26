#include <stdio.h>

float a, b, c, d, e, f;
int main() {
	scanf("%f %f %f\n%f %f %f", &d, &e, &f, &a, &b, &c);
	if (a >= d && b >= e && c >= f)
		printf("A");
	else if (b >= e && c >= f)
		printf("%c", a >= d / 2 ? 'B' : 'C');
	else if (c >= f)
		printf("%c", b >= e / 2 ? 'D' : 'E');
	return 0;
}