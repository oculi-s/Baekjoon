#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int T, n, i, j, v;
	float x1, y1, x2, y2, cx, cy, r, d1, d2;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		v = 0;
		scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
		scanf("%d", &n);
		for (j = 0; j < n; j++) {
			scanf("%f %f %f", &cx, &cy, &r);
			d1 = sqrt(pow(cx - x1, 2) + pow(cy - y1, 2));
			d2 = sqrt(pow(cx - x2, 2) + pow(cy - y2, 2));
			if ((r > d1 && r < d2) || (r > d2 && r < d1))
				v++;
		}
		printf("%d\n", v);
	}
	return 0;
}