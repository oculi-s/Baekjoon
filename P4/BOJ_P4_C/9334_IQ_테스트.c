#include <stdio.h>

float _det(float a[3][3], int n) {
	if (n == 2)
		return a[0][0] * a[1][1] - a[0][1] * a[1][0];
	else {
		int i, s = 0;
		float t[3][3];
		for (i = 0; i < 3; i++) {
			t[0][0] = a[1][(i + 1) % 3], t[0][1] = a[1][(i + 2) % 3];
			t[1][0] = a[2][(i + 1) % 3], t[1][1] = a[2][(i + 2) % 3];
			s += a[0][i] * _det(t, 2);
		}
		return s;
	}
}

void _invm(float a[3][3], float b[3][3], int n) {
	float K = _det(a, n);
	if (n == 2)
		b[0][0] = a[1][1] / K, b[0][1] = -a[0][1] / K, b[1][0] = -a[1][0] / K, b[1][1] = a[0][0] / K;
	else {
		float t[3][3];
		int i, j;
		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++) {
				t[0][0] = a[(i + 1) % 3][(j + 1) % 3], t[0][1] = a[(i + 1) % 3][(j + 2) % 3];
				t[1][0] = a[(i + 2) % 3][(j + 1) % 3], t[1][1] = a[(i + 2) % 3][(j + 2) % 3];
				b[j][i] = _det(t, 2) / K;
			}
	}
}

int main() {
	int T, N, i, j;
	float a[12], K[3], b[3][3], c[3][3];
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &N);
		for (i = 0; i < N; i++)
			scanf("%f", a + i);
		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++)
				b[2 - i][j] = a[i + j];
		if (_det(b, 3) == 0)
			if (_det(b, 2) == 0)
				K[0] = a[1] / a[0], printf("%.0f\n", a[N - 1] * K[0]);
			else {
				_invm(b, c, 2);
				K[0] = a[3] * c[0][0] + a[4] * c[1][0];
				K[1] = a[3] * c[0][1] + a[4] * c[1][1];
				printf("%.0f\n", a[N - 1] * K[0] + a[N - 2] * K[1]);
			}
		else {
			_invm(b, c, 3);
			for (i = 0; i<3; i++)
				K[i] = a[3] * c[0][i] + a[4] * c[1][i] + a[5] * c[2][i];
			printf("%.0f\n", a[N - 1] * K[0] + a[N - 2] * K[1] + a[N - 3] * K[2]);
		}
	}
	return 0;
}