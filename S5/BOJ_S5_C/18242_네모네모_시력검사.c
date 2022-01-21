#include <stdio.h>

char s[101][101];
int n, m, i, j, p[4][2];

void _1() {
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (s[i][j] == '#') {
				p[0][0] = i, p[0][1] = j;
				return;
			}
}
void _2() {
	int i, j;
	for (i = n - 1; i >= 0; i--)
		for (j = 0; j < m; j++)
			if (s[i][j] == '#') {
				p[1][0] = i, p[1][1] = j;
				return;
			}
}
void _3() {
	int i, j;
	for (i = 0; i < n; i++)
		for (j = m - 1; j >= 0; j--)
			if (s[i][j] == '#') {
				p[2][0] = i, p[2][1] = j;
				return;
			}
}
void _4() {
	int i, j;
	for (i = n - 1; i >= 0; i--)
		for (j = m - 1; j >= 0; j--)
			if (s[i][j] == '#') {
				p[3][0] = i, p[3][1] = j;
				return;
			}
}

int main() {
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%s", s[i]);
	_1(), _2(), _3(), _4();
	if (s[p[0][0]][(p[0][1] + p[2][1]) / 2] == '.')
		printf("UP");
	else if (s[(p[0][0] + p[1][0]) / 2][p[0][1]] == '.')
		printf("LEFT");
	else if (s[p[1][0]][(p[1][1] + p[3][1]) / 2] == '.')
		printf("DOWN");
	else
		printf("RIGHT");
	return 0;
}
