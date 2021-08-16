#include <stdio.h>
#include <stdlib.h>

int _max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int n, i, j, s[500][500];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < i + 1; j++)
			scanf("%d", &s[i][j]);
	while (--n >= 0) {
		for (i = 0; i < n; i++)
			s[n - 1][i] += _max(s[n][i], s[n][i + 1]);
	}
	printf("%d", s[0][0]);
	return 0;
}