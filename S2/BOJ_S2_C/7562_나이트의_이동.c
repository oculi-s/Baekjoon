#include <stdio.h>

typedef struct {
	short x, y;
	int c;
} node;

int t, n, x1, y1, x2, y2, v[300][300], i, j, f, e, c, nx, ny;
int dx[8] = { -2,-1,1,2,2,1,-1,-2 }, dy[8] = { 1,2,2,1,-1,-2,-2,-1 };
node s[2000000];

int _in(int x, int y) {
	return (x >= 0) && (x < n) && (y >= 0) && (y < n);
}

int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d\n%d %d\n%d %d", &n, &x1, &y1, &x2, &y2);
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				v[i][j] = 0;
		v[y1][x1] = 1, s[e].x = x1, s[e].y = y1, e++;
		while (f < e) {
			x1 = s[f].x, y1 = s[f].y, c = s[f].c, f++;
			if (x1 == x2 && y1 == y2)
				printf("%d\n", c);
			for (i = 0; i < 8; i++) {
				nx = x1 + dx[i], ny = y1 + dy[i];
				if (_in(nx, ny))
					if (!v[ny][nx])
						v[ny][nx] = 1, s[e].x = nx, s[e].y = ny, s[e].c = c + 1, e++;
			}
		}
	}
	return 0;
}