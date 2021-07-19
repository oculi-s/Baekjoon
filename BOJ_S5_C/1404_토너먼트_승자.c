#include <stdio.h>
int _p(i) {
	return i + (i % 2 == 0) - (i % 2);
}
int main() {
	int i, j, k;
	double p[8][8], w[8][3], t;
	for (i = 0; i < 8; i++)
		for (j = i + 1; j < 8; j++)
			scanf("%lf", &p[i][j]), p[j][i] = 100 - p[i][j];
	for (i = 0; i < 8; i++)
		w[i][0] = p[i][_p(i)] / 100;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 2; j++) {
			if (w[i * 2 + j]) {
				t = 0;
				for (k = 0; k < 2; k++)
					t += p[i * 2 + j][_p(i) * 2 + k] * w[_p(i) * 2 + k][0];
				w[i * 2 + j][1] = w[i * 2 + j][0] * t / 100;
			}
		}
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++) {
			if (w[i * 2 + j]) {
				t = 0;
				for (k = 0; k < 4; k++)
					t += p[i * 4 + j][_p(i) * 4 + k] * w[_p(i) * 4 + k][1];
				w[i * 4 + j][2] = w[i * 4 + j][1] * t / 100;
			}
		}
	for (i = 0; i < 8; i++)
		printf("%.10lf ", w[i][2]);
	return 0;
}