#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	int x1, y1, r1, x2, y2, r2, d, v, r, s;
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		d = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
		r = (r1 + r2) * (r1 + r2);
		s = (r1 - r2) * (r1 - r2);
		if (d == 0)
			v = r1 == r2 ? -1 : 0;
		else if (d > s)
			v = d < r ? 2 : d == r ? 1 : 0;
		else
			v = d > s ? 2 : d == s ? 1 : 0;
		printf("%d\n", v);
	}
	return 0;
}