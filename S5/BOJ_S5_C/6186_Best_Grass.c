#include <stdio.h>

char s[102][103];
int n, m, i, j, c;

void _cut(int i, int j) {
	if (s[i][j] == '#') {
		s[i][j] = '.';
		_cut(i - 1, j);
		_cut(i + 1, j);
		_cut(i, j - 1);
		_cut(i, j + 1);
	}
}

int main() {
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
		scanf("%s", s[i] + 1);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			if (s[i][j] == '#')
				c++, _cut(i, j);
	printf("%d", c);
	return 0;
}
