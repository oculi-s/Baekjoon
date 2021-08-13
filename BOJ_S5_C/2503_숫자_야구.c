#include <stdio.h>
#include <stdbool.h>

int _s(int a, int b) {
	int t = a % 10 == b % 10;
	a /= 10, b /= 10, t += a % 10 == b % 10;
	t += a / 10 == b / 10;
	return t;
}

int _b(int a, int b) {
	int x[3], y[3], t = 0;
	x[0] = a % 10, y[0] = b % 10;
	a /= 10, b /= 10, x[1] = a % 10, y[1] = b % 10;
	x[2] = a / 10, y[2] = b / 10;
	t = x[0] == y[1] || x[0] == y[2];
	t += x[1] == y[0] || x[1] == y[2];
	t += x[2] == y[0] || x[2] == y[1];
	return t;
}

bool a[1000];
int main() {
	int n, i, j, k, t[100], s[100], b[100], c = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d %d %d", t + i, s + i, b + i);
	for (i = 123; i < 1000; i++)
		a[i] = 0;
	for (i = 1; i < 10; i++)
		for (j = 1; j < 10; j++)
			for (k = 1; k < 10; k++)
				if (i != j && j != k && k != i)
					a[i * 100 + j * 10 + k] = 1;
	for (i = 123; i < 1000; i++)
		if (a[i])
			for (j = 0; j < n; j++)
				if (!(_s(t[j], i) == s[j] && _b(t[j], i) == b[j])) {
					a[i] = 0;
					break;
				}
	for (i = 123; i < 1000; i++)
		c += a[i];
	printf("%d", c);
	return 0;
}