#include <stdio.h>
#define M 500

float _det(float a[M][M], int x, int y, int o, int n) {
	if (n == 1)
		return a[y][x];
	else if (n == 2)
		return a[y][x] * a[(y + 1) % o][(x + 1) % o] - a[y][(x + 1) % o] * a[(y + 1) % o][x];
	else {
		int i, s = 0;
		for (i = 1; i <= n; i++)
			s += a[0][i - 1] * _det(a, i % o, 1, o, n - 1);
		return s;
	}
}

int main() {
	int n, i, j;
	float a[M][M];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%f", &a[i][j]);
	float k = _det(a, 0, 0, n, n);
	if (k == 0)
		printf("no inverse");
	else {
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++)
				printf("%f ", _det(a, i % n, j % n, n, n - 1) / k);
			printf("\n");
		}
	}
}