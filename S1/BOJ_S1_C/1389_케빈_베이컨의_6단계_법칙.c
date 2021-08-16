#include <stdio.h>
#include <stdlib.h>
#define _min(a, b) a < b ? a : b

int main() {
	int n, m, i, j, o;
	scanf("%d %d", &n, &m);
	int V[100][100], a, b, s[100];
	for (i = 0; i < n; i++)
		s[i] = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			V[i][j] = 101;
	for (i = 0; i < m; i++)
		scanf("%d %d", &a, &b), V[a-1][b-1] = 1, V[b-1][a-1] = 1;
	for (int _ = 0; _<n; _++)
		for (o = 0; o < n; o++)
			for (i = 0; i < n; i++)
				for (j = 0; j < n; j++)
					V[o][i] = _min(V[o][i], V[o][j] + V[j][i]);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			s[i] += V[i][j];
	m = 20000;
	for (i = 0; i < n; i++)
		m = m < s[i] ? m : s[i];
	for (i = 0; i < n; i++)
		if (s[i] == m) {
			printf("%d", i + 1);
			break;
		}
	return 0;
}