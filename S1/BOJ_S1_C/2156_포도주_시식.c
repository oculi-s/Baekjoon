#include <stdio.h>

int v[10000][2], a = 0, x[10000], n, i;

int _max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", x + i);
	v[0][0] = x[0], v[1][0] = x[1], v[1][1] = x[0] + x[1];
	v[2][0] = x[0] + x[2], v[2][1] = x[1] + x[2];
	for (i = 3; i <= n; i++) {
		v[i][0] = _max(v[i][0], v[i - 2][0]);
		v[i][0] = _max(v[i][0], v[i - 2][1]);
		v[i][0] = _max(v[i][0], v[i - 3][0]);
		v[i][0] = _max(v[i][0], v[i - 3][1]);
		v[i][0] += x[i];
		v[i][1] = v[i - 1][0] + x[i];
	}
	a = _max(a, v[n][0]);
	a = _max(a, v[n][1]);
	a = _max(a, v[n - 1][0]);
	a = _max(a, v[n - 1][1]);
	printf("%d", a);
}