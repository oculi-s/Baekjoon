#include <stdio.h>

int _gcd(int a, int b) {
	int t;
	while (a % b)
		t = b, b = a % b, a = t;
	return b;
}

int t, n, i, j, x[100];
long long s;
int main() {
	scanf("%d", &t);
	while (t--) {
		s = 0;
		scanf("%d", &n);
		for (i = 0; i < n; i++)
			scanf("%d", x + i);
		for (i = 0; i < n; i++)
			for (j = i + 1; j < n; j++)
				s += _gcd(x[i], x[j]);
		printf("%lld\n", s);
	}
	return 0;
}