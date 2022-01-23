#include <stdio.h>

int n, i, j, a[20][20], m;

void _mov(int a[20][20]) {
	int b[20][20], i, j, k, e[20];
	for (i = 0; i < n; i++) {
		e[i] = 0;
		for (j = 0; j < n; j++) {
			if (a[i][j])
				b[i][e[i]] = a[i][j], e[i]++;
			a[i][j] = 0;
		}
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < e[i] - 1; j++)
			if (b[i][j] == b[i][j + 1])
				b[i][j] *= 2, b[i][j + 1] = 0, j++;
	for (i = 0; i < n; i++)
		for (j = 0, k = 0; j < e[i]; j++)
			if (b[i][j])
				a[i][k] = b[i][j], k++;
}

void _rot(int a[20][20]) {
	int b[20][20], i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			b[i][j] = a[n - 1 - j][i];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = b[i][j];
}

void _r(int a[20][20], int c) {
	int b[20][20], i, j, k;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (m < a[i][j])
				m = a[i][j];
	if (c < 5)
		for (k = 0; k < 4; k++) {
			for (i = 0; i < n; i++)
				for (j = 0; j < n; j++)
					b[i][j] = a[i][j];
			_mov(b);
			_r(b, c + 1);
			_rot(a);
		}
}

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &(a[i][j]));
	_r(a, 0);
	printf("%d", m);
	return 0;
}
