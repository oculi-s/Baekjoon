#include <stdio.h>

typedef struct {
	int x, y;
} node;

node s[10000];

int m[102][102], n, i, a, b, x, y, f, e, nx, ny, t, v;
int dx[4] = { -1,1,0,0 }, dy[4] = { 0,0,-1,1 };
char c;
int d, D[4][2] = { {3, 2},{2, 3},{0, 1},{1, 0} };

int move() {
	nx = s[e].x + dx[d], ny = s[e].y + dy[d], t++;
	if (m[ny][nx] == 1)
		return 0;
	if (m[ny][nx] == 0)
		m[s[f].y][s[f].x] = 0, f++;
	m[ny][nx] = 1, e++, s[e].x = nx, s[e].y = ny;
	return 1;
}

int main() {
	scanf("%d", &n);
	for (i = 0; i <= n + 1; i++)
		m[0][i] = 1, m[n + 1][i] = 1, m[i][0] = 1, m[i][n + 1] = 1;
	scanf("%d", &a);
	while (a--)
		scanf("%d %d", &y, &x), m[y][x] = 2;
	scanf("%d", &a);
	d = 1, v = 1, m[1][1] = 1, s[0].x = 1, s[0].y = 1;
	while (a-- && v) {
		scanf("%d %c", &b, &c);
		while (b != t && v)
			v = move();
		d = D[d][c == 'D'];
	}
	while (v)
		v = move();
	printf("%d", t);
	return 0;
}