#include <stdio.h>
#include <stdbool.h>
#define N 1001

typedef struct {
	short x, y;
	bool b;
	int d;
} c;

c s[N * N * 2];
bool p[N][N], v[N][N][2], b, nb;
int x, y, nx, ny, n, m, i, j, dx[4] = { -1,1,0,0 }, dy[4] = { 0,0,-1,1 };
int main() {
	int f = 0, e = 1, d;
	char t[N];
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++) {
		scanf("%s", t);
		for (j = 1; j <= m; j++)
			p[i][j] = t[j - 1] == '1';
	}
	s[0].x = 1, s[0].y = 1, s[0].d = 1, v[1][1][0] = 1;
	while (!(x == m && y == n) && f < e) {
		x = s[f].x, y = s[f].y, d = s[f].d, b = s[f].b, f++;
		for (i = 0; i < 4; i++) {
			nx = x + dx[i], ny = y + dy[i], nb = p[ny][nx];
			if (nx && ny && (nx <= m) && (ny <= n))
				if (!(nb && b))
					if (!v[ny][nx][b + nb])
						s[e].x = x + dx[i], s[e].y = y + dy[i], s[e].d = d + 1, s[e].b = b + nb, v[ny][nx][b + nb] = 1, e++;
		}
	}
	printf("%d", x == m && y == n ? d : -1);
	return 0;
}