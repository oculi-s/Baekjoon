#include <stdio.h>

int p[102][102], t[102][102], n, h, i, j, c, m;
int dx[4] = { -1,1,0,0 }, dy[4] = { 0,0,-1,1 };

void _rec(int y, int x) {
	int i;
	t[y][x] = 0;
	for (i = 0; i < 4; i++)
		if (t[y + dy[i]][x + dx[i]])
			_rec(y + dy[i], x + dx[i]);
}

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			scanf("%d", &p[i][j]);
	for (h = 0; h <= 101; h++) {
		c = 0;
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				t[i][j] = p[i][j] > h;
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				if (t[i][j])
					_rec(i, j), c++;
		m = m > c ? m : c;
	}
	printf("%d", m);
	return 0;
}