#include <stdio.h>

typedef struct {
	char x, y, z;
	int c;
}node;

short p[102][102][102], n, m, h, x, y, z, i, nx, ny, nz;
short dx[6] = { 1,-1,0,0,0,0 }, dy[6] = { 0,0,1,-1,0,0 }, dz[6] = { 0,0,0,0,1,-1 };
int f, e, c;
node s[10000000];

int main() {
	scanf("%hd %hd %hd", &m, &n, &h);
	for (z = 0; z <= h + 1; z++)
		for (y = 0; y <= n + 1; y++)
			for (x = 0; x <= m + 1; x++)
				p[z][y][x] = -1;
	for (z = 1; z <= h; z++)
		for (y = 1; y <= n; y++)
			for (x = 1; x <= m; x++) {
				scanf("%hd", &p[z][y][x]);
				if (p[z][y][x] == 1)
					s[e].x = x, s[e].y = y, s[e].z = z, s[e].c = 0, e++;
			}
	while (f < e) {
		x = s[f].x, y = s[f].y, z = s[f].z;
		if (!p[z][y][x] || !s[f].c) {
			p[z][y][x] = 1, c = s[f].c;
			for (i = 0; i < 6; i++) {
				nx = x + dx[i], ny = y + dy[i], nz = z + dz[i];
				if (!p[nz][ny][nx])
					s[e].x = nx, s[e].y = ny, s[e].z = nz, s[e].c = c + 1, e++;
			}
		}
		f++;
	}
	for (z = 1; z <= h; z++)
		for (y = 1; y <= n; y++)
			for (x = 1; x <= m; x++)
				if (!p[z][y][x])
					c = -1;
	printf("%d", c);
	return 0;
}