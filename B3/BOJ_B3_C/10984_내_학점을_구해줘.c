#include <stdio.h>

int n, t, i;
float a, b, c, d;
int main() {
	scanf("%d", &t);
	while (t--) {
		c = 0, d = 0;
		scanf("%d", &n);
		for (i = 0; i < n; i++)
			scanf("%f %f", &a, &b), c += a * b, d += a;
		printf("%.0f %.1f\n", d, c / d);
	}
	return 0;
}