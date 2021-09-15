#include <stdio.h>

typedef struct {
	short y[2500], x[2500], e;
}node;

node stack[500], t;
char m[52][52], s[51];
int r, c, i, j, k, S[2], e, nx, ny, d, min[52][52];
short dx[4] = { -1,1,0,0 }, dy[4] = { 0,0,-1,1 };

int main() {
	scanf("%d %d", &r, &c);
	for (i = 0; i <= c + 1; i++)
		m[0][i] = '*', m[r + 1][i] = '*';
	for (i = 0; i <= r + 1; i++)
		m[i][0] = '*', m[i][c + 1] = '*';
	for (i = 1; i <= r; i++) {
		scanf("%s", s);
		for (j = 1; j <= c; j++) {
			m[i][j] = s[j - 1], min[i][j] = 10000;
			if (s[j - 1] == 'S')
				S[0] = i, S[1] = j, m[i][j] = '.';
		}
	}
	d = 0, stack[0].y[0] = S[0], stack[0].x[0] = S[1], stack[0].e = 1;
	while (stack[d].e) {
		t.e = 0;
		for (i = 1; i <= r; i++)
			for (j = 1; j <= c; j++)
				if (m[i][j] == '*')
					t.y[t.e] = i, t.x[t.e] = j, t.e++;
		for (i = 0; i < t.e; i++)
			for (k = 0; k < 4; k++)
				if (m[t.y[i] + dy[k]][t.x[i] + dx[k]] == '.')
					m[t.y[i] + dy[k]][t.x[i] + dx[k]] = '*';
		e = 0;
		for (i = 0; i < stack[d].e; i++) {
			for (j = 0; j < 4; j++) {
				ny = stack[d].y[i] + dy[j];
				nx = stack[d].x[i] + dx[j];
				if (m[ny][nx] == 'D') {
					printf("%d", d + 1);
					return 0;
				}
				if (m[ny][nx] == '.')
					if (d + 1 < min[ny][nx])
						min[ny][nx] = d + 1, stack[d + 1].y[e] = ny, stack[d + 1].x[e] = nx, e++;
			}
		}
		stack[d + 1].e = e;
		d++;
	}
	printf("KAKTUS");
	return 0;
}