#include <stdio.h>
#include <stdlib.h>

int f(int n, int d) {
	int s[20], i, l = 0, a = 1, b = 1, c, t;
	while (n)
		s[l++] = n % 10, n /= 10, a *= 2, b *= 2;
	a -= 2;
	for (i = l - 1; i >= 0; i--) {
		if (s[i] != 7 && s[i] != 4)
			break;
		else if (s[i] == 4) {
			t = i, c = 1;
			while (t--) { c *= 2; };
			b -= c;
		}
	}
	c = 1, t = i + 1;
	while (t--) { c *= 2; };
	if (i >= 0) {
		if (s[i] < 4)
			b -= c;
		else if (s[i] > 4 && s[i] < 7)
			b -= c / 2;
	}
	else
		if (d == -1)
			a -= 1;
	a += b;
	return a;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", f(b, 1) - f(a, -1));
	return 0;
}