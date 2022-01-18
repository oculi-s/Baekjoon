#include <stdio.h>
#include <math.h>

int i, n, a, b;
char p[100000001];
double c;

int _rev(int i) {
	int t = 0;
	while (i)
		t = (t * 10) + i % 10, i /= 10;
	return t;
}

void _r(int i, int e) {
	if (e < c) {
		int a = _rev(i), b = pow(10, e), j;
		p[i * b + a] = 1;
		for (j = 0; j <= 9; j++)
			p[i * b * 10 + j * b + a] = 1, _r(i * 10 + j, e + 1);
	}
}

int _p(int i) {
	int j;
	for (j = 2; j <= sqrt(i); j++)
		if (i % j == 0)
			return 0;
	return 1;
}

int main() {
	scanf("%d %d", &a, &b);
	c = log10(b) / 2;
	for (i = 1; i <= 9; i++)
		p[i] = 1, _r(i, 1);
	for (i = a; i <= b; i++)
		if (p[i])
			if (_p(i))
				printf("%d\n", i);
	printf("-1");
	return 0;
}
