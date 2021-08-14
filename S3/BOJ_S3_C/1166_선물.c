#include <stdio.h>

int main() {
	long double n, l, w, h, L, R, M, d = 0.0000000005;
	scanf("%Lf %Lf %Lf %Lf", &n, &l, &w, &h);
	L = 0, R = l + w + h;
	while (R - L  > d) {
		M = (L + R) / 2;
		if ((long long)(l / M) * (long long)(w / M) * (long long)(h / M) < n)
			R = M;
		else
			L = M;
	}
	printf("%.12Lf", M);
	return 0;
}