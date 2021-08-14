#include <stdio.h>

typedef long double ld;

ld _abs(ld a) {
	return a > 0 ? a : -a;
}

ld _tr(ld a, ld b, ld c, ld d, ld e, ld f) {
	return _abs((a * d + c * f + e * b) - (c * b + e * d + a * f)) / 2;
}

int main() {
	int n, i, j, k;
	ld x[35], y[35], m = 0, t;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%Lf %Lf", x + i, y + i);
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			for (k = j + 1; k < n; k++) {
				t = _tr(x[i], y[i], x[j], y[j], x[k], y[k]);
				m = m > t ? m : t;
			}
	printf("%.12Lf", m);
	return 0;
}