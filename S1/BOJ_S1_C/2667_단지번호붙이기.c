#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool m[27][27];
int dx[4] = { -1,1,0,0 }, dy[4] = { 0,0,-1,1 };
int n, i, j, x, y, c[350], e = 0;
void _toz(int x, int y) {
	int i;
	if (m[y][x]) {
		m[y][x] = 0, c[e]++;
		for (i = 0; i < 4; i++)
			if (m[y + dy[i]][x + dx[i]])
				_toz(x + dx[i], y + dy[i]);
	}
}

int* _c(int* a, int* b) {
	return *a - *b;
}

char t[26];
int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%s", t);
		for (j = 1; j <= n; j++)
			m[i][j] = t[j - 1] == '1';
	}
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (m[i][j])
				_toz(j, i), e++;
	printf("%d\n", e);
	qsort(c, e, sizeof(int), _c);
	for (i = 0; i < e; i++)
		printf("%d\n", c[i]);
	return 0;
}