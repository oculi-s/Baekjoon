#include <stdio.h>
#define N 10

int n, i, j, a[20][20], m[11], p[11] = { 1,2,4,8,16,32,64,128,256,512,1024 };

int _up(int a[20][20], int t) {
	int i, j, k, c = 0, d = 0;
	for (i = 0; i < n; i++)
		for (j = 1, k = 0; j < n; j++)
			if (a[j][i] && j != k) {
				if (a[j][i] == a[k][i]) {
					if (a[j][i] == t)
						d = 1;
					a[k][i] *= 2, a[j][i] = 0, k++, c = 1;
				}
				else {
					if (a[k][i])
						k++;
					a[k][i] = a[j][i];
					if (k != j)
						a[j][i] = 0, c = 1;
				}
			}
	return c + d;
}

int _left(int a[20][20], int t) {
	int i, j, k, c = 0, d = 0;
	for (i = 0; i < n; i++)
		for (j = 1, k = 0; j < n; j++)
			if (a[i][j] && j != k) {
				if (a[i][j] == a[i][k]) {
					if (a[i][j] == t)
						d = 1;
					a[i][k] *= 2, a[i][j] = 0, k++, c = 1;
				}
				else {
					if (a[i][k])
						k++;
					a[i][k] = a[i][j];
					if (k != j)
						a[i][j] = 0, c = 1;
				}
			}
	return c + d;
}

int _right(int a[20][20], int t) {
	int i, j, k, c = 0, d = 0;
	for (i = 0; i < n; i++)
		for (j = n - 2, k = n - 1; j >= 0; j--)
			if (a[i][j] && j != k) {
				if (a[i][j] == a[i][k]) {
					if (a[i][j] == t)
						d = 1;
					a[i][k] *= 2, a[i][j] = 0, k--, c = 1;
				}
				else {
					if (a[i][k])
						k--;
					a[i][k] = a[i][j];
					if (k != j)
						a[i][j] = 0, c = 1;
				}
			}
	return c + d;
}

int _down(int a[20][20], int t) {
	int i, j, k, c = 0, d = 0;
	for (i = 0; i < n; i++)
		for (j = n - 2, k = n - 1; j >= 0; j--)
			if (a[j][i] && j != k) {
				if (a[j][i] == a[k][i]) {
					if (a[j][i] == t)
						d = 1;
					a[k][i] *= 2, a[j][i] = 0, k--, c = 1;
				}
				else {
					if (a[k][i])
						k--;
					a[k][i] = a[j][i];
					if (k != j)
						a[j][i] = 0, c = 1;
				}
			}
	return c + d;
}

int _mov(int a[20][20], int t, int k) {
	if (k == 0)
		return _up(a, t);
	else if (k == 1)
		return _right(a, t);
	else if (k == 2)
		return _down(a, t);
	else
		return _left(a, t);
}

int _m(int t, int c) {
	int i;
	for (i = N; i > c; i--)
		if (m[i] > p[i - c] * t)
			return 0;
	return 1;
}

void _r(int a[20][20], int e, int t) {
	int b[20][20], i, j, k, c;
	if (m[e] < t)
		m[e] = t;
	if (e < N)
		if (_m(t, e))
			for (k = 0; k < 4; k++) {
				for (i = 0; i < n; i++)
					for (j = 0; j < n; j++)
						b[i][j] = a[i][j];
				c = _mov(b, t, k);
				if (c)
					_r(b, e + 1, t * c);
			}
}

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) {
			scanf("%d", &(a[i][j]));
			if (m[0] < a[i][j])
				m[0] = a[i][j];
		}
	_r(a, 0, m[0]);
	for (i = 0; i <= N; i++)
		if (m[i] > m[0])
			m[0] = m[i];
	printf("%d", m[0]);
	return 0;
}
