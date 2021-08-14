#include <stdio.h>

int main() {
	long long a, b, c, d, e, t;
	scanf("%lld %lld %lld", &a, &b, &c);
	if (a == c)
		printf("0");
	else {
		e = 1;
		while (b) {
			t = a, d = 1;
			while (b >= d * 2)
				t = (t * t) % c, d *= 2;
			b -= d, e *= t, e %= c;
		}
		printf("%lld", e);
	}
	return 0;
}