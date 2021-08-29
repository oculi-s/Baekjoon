#include <stdio.h>

int p[52][52], m, n, i, j, c;
int dx[8] = { -1,1,0,0,1,1,-1,-1 }, dy[8] = { 0,0,-1,1,1,-1,1,-1 };

void _is(int y, int x) {
	p[y][x] = 0;
	int i;
	for (i = 0; i < 8; i++)
		if (p[y + dy[i]][x + dx[i]])
			_is(y + dy[i], x + dx[i]);
}

int main() {
	scanf("%d %d", &m, &n);
	while (m + n) {
		c = 0;
		for (i = 1; i <= n; i++)
			for (j = 1; j <= m; j++)
				scanf("%d", &p[i][j]);
		for (i = 1; i <= n; i++)
			for (j = 1; j <= m; j++)
				if (p[i][j])
					_is(i, j), c++;
		printf("%d\n", c);
		scanf("%d %d", &m, &n);
	}
	return 0;
}