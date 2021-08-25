#include <stdio.h>

int _gcd(int a, int b) {
	int t;
	while (a % b)
		t = b, b = a % b, a = t;
	return b;
}

int main() {
	int n, i, r, t, g;
	scanf("%d", &n);
	scanf("%d", &r);
	for (i = 1; i < n; i++)
		scanf("%d", &t), g = _gcd(r, t), printf("%d/%d\n", r / g, t / g);
	return 0;
}