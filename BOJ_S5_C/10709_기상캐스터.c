#include <stdio.h>

int p[101][101];
char t[101];

int main() {
	int n, m, i, j, c;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			p[i][j] = -1;
	for (i = 0; i < n; i++) {
		scanf("%s", t);
		for (j = 0; j < m; j++)
			if (t[j] == 'c') {
				c = 0, p[i][j] = 0, j++, c++;
				while (t[j] != 'c' && j < m)
					p[i][j] = c, j++, c++;
				if (t[j] == 'c' && j < m)
					j--;
			}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			printf("%d ", p[i][j]);
		printf("\n");
	}
	return 0;
}