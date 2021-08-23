#include <stdio.h>
#define M 100000000

int _min(int a, int b) {
	return a < b ? a : b;
}

int n, i, j, k, c[3][1002], m[3][1002][3], t, a = M;
int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d %d %d", &c[0][i], &c[1][i], &c[2][i]);
		for (j = 0; j < 3; j++)
			for (k = 0; k < 3; k++)
				m[j][i][k] = M;
	}
	for (i = 0; i < 3; i++) {
		m[i][n - 1][(i + 1) % 3] = c[(i + 1) % 3][n - 1] + c[i][n];
		m[i][n - 1][(i + 2) % 3] = c[(i + 2) % 3][n - 1] + c[i][n];
	}
	for (i = n - 2; i; i--)
		for (j = 0; j < 3; j++)
			for (k = 0; k < 3; k++) {
				t = _min(m[k][i + 1][(j + 1) % 3], m[k][i + 1][(j + 2) % 3]);
				m[k][i][j] = c[j][i] + t;
			}
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if (i != j)
				a = _min(a, m[i][1][j]);
	printf("%d", a);
	return 0;
}