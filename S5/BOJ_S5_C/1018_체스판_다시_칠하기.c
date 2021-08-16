#include <stdio.h>
#include <stdlib.h>
#define _min(a,b) a<b?a:b;

int _check(char p[50][50], int i, int j, char t) {
	int v = 0, di, dj;
	for (di = 0; di < 8; di++)
		for (dj = 0; dj < 8; dj++)
			v += p[i + di][j + dj] == ((di + dj) % 2 ? t : t == 'W' ? 'B' : 'W');
	return v;
}

int main() {
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	char p[50][50];
	for (i = 0; i < n; i++)
		scanf("%s", p[i]);
	int a = 100000, v;
	for (i = 0; i <= n - 8; i++)
		for (j = 0; j <= m - 8; j++) {
			v = _check(p, i, j, p[i][j]);
			a = _min(a, v);
			v = _check(p, i, j, p[i][j] == 'W' ? 'B' : 'W');
			a = _min(a, v);
		}
	printf("%d", a);
	return 0;
}