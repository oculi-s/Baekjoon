#include <stdio.h>
#include <stdbool.h>
#define N 1002

typedef struct {
	short x, y;
	int t;
} node;

node s[2 * N * N];
short p[N][N], dx[4] = { -1,1,0,0 }, dy[4] = { 0,0,-1,1 }, n, m, i, j, a, b;
int e = 0, f = 0, c;

int main() {
	scanf("%hd %hd", &m, &n);
	for (i = 0; i <= n + 1; i++)
		for (j = 0; j <= m + 1; j++)
			p[i][j] = -1;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf("%hd", &p[i][j]);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			if (p[i][j] == 1)
				s[e].x = j, s[e].y = i, s[e].t = 0, e++;
	while (f < e) {
		a = s[f].x, b = s[f].y;
		if (!p[b][a] || !s[f].t) {
			p[b][a] = 1, c = s[f].t;
			for (j = 0; j < 4; j++)
				if (!p[b + dy[j]][a + dx[j]])
					s[e].x = a + dx[j], s[e].y = b + dy[j], s[e].t = c + 1, e++;
		}
		f++;
	}
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			if (!p[i][j])
				c = -1;
	printf("%d", c);
	return 0;
}