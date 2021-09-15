#include <stdio.h>

typedef struct {
	int l, r, u, d, f, b;
} dice;

dice r = {.u = 0, .f = 1, .l = 2, .b = 3, .r = 4, .d = 5};
int n, m, i, j, k, x, y, a[22][22], c, b[6], t;

void change() {
	if (a[y][x] == 0)
		a[y][x] = b[r.d];
	else
		b[r.d] = a[y][x], a[y][x] = 0;
}

int main() {
	scanf("%d %d %d %d %d", &n, &m, &y, &x, &k);
	y++, x++;
	for (i = 0; i <= n + 1; i++)
		a[i][0] = -1, a[i][m + 1] = -1;
	for (i = 0; i <= m + 1; i++)
		a[0][i] = -1, a[n + 1][i] = -1;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < k; i++) {
		scanf("%d", &c);
		if (c == 1) {
			if (a[y][x + 1] >= 0)
				x++, t = r.u, r.u = r.l, r.l = r.d, r.d = r.r, r.r = t, change(), printf("%d\n", b[r.u]);
		}
		else if (c == 2) {
			if (a[y][x - 1] >= 0)
				x--, t = r.u, r.u = r.r, r.r = r.d, r.d = r.l, r.l = t, change(), printf("%d\n", b[r.u]);
		}
		else if (c == 3) {
			if (a[y - 1][x] >= 0)
				y--, t = r.u, r.u = r.b, r.b = r.d, r.d = r.f, r.f = t, change(), printf("%d\n", b[r.u]);
		}
		else {
			if (a[y + 1][x] >= 0)
				y++, t = r.u, r.u = r.f, r.f = r.d, r.d = r.b, r.b = t, change(), printf("%d\n", b[r.u]);
		}
	}
	return 0;
}