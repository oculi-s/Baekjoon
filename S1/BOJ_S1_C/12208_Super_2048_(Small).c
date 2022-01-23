#include <stdio.h>

int t, n, i, j, k, a[20][20], m;
char c[6];

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

void _rot(int a[20][20], int k) {
	while (k--) {
		int b[20][20], i, j;
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				b[i][j] = a[n - 1 - j][i];
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				a[i][j] = b[i][j];
	}
}

int main() {
	scanf("%d", &t);
	for (k = 1; k <= t; k++) {
		scanf("%d %s", &n, c);
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				scanf("%d", &(a[i][j]));
		if (c[0] == 'l')
			_mov(a);
		else if (c[0] == 'd')
			_rot(a, 1), _mov(a), _rot(a, 3);
		else if (c[0] == 'r')
			_rot(a, 2), _mov(a), _rot(a, 2);
		else if (c[0] == 'u')
			_rot(a, 3), _mov(a), _rot(a, 1);
		printf("Case #%d:\n", k);
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++)
				printf("%d ", a[i][j]);
			printf("\n");
		}
	}
	return 0;
}
