#include <stdio.h>
#include <math.h>

unsigned int a[100], p, i, j;

int _f(int n, int p) {
	int v = 0;
	while (n)
		v += pow(n % 10, p), n /= 10;
	return v;
}

int _in(int n) {
	for (int j = 0; j < i; j++)
		if (a[j] == n)
			return j;
	return 0;
}

int main() {
	scanf("%d %d", a + 1, &p);
	i = 2;
	while (1) {
		a[i] = _f(a[i - 1], p);
		j = _in(a[i]);
		if (j)
			break;
		i++;
	}
	printf("%d", j - 1);
	return 0;