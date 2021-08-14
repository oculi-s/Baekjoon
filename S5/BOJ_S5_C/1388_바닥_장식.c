#include <stdbool.h>
#include <stdio.h>

int main() {
	bool p[101][101];
	int n, m, i, j, a = 0;
	char s[100];
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		p[i][m] = 0;
	for (i = 0; i < m; i++)
		p[n][i] = 0;
	for (i = 0; i < n; i++) {
		scanf("%s", s);
		for (j = 0; j < m; j++) {
			p[i][j] = s[j] == '-';
			if (!p[i][m] && !p[i][j])
				p[i][m] = 1;
			if (!p[n][j] && p[i][j])
				p[n][j] = 1;
		}
	}
	for (i = 0; i < n; i++) {
		if (p[i][m]) {
			j = 0;
			while (j < m) {
				if (p[i][j]) {
					a++;
					while (p[i][j]) { j++; }
				}
				else
					j++;
			}
		}
		else
			a++;
	}
	for (i = 0; i < m; i++) {
		if (p[n][i]) {
			j = 0;
			while (j < n) {
				if (!p[j][i]) {
					a++;
					while (!p[j][i]) { j++; }
				}
				else
					j++;
			}
		}
		else
			a++;
	}
	printf("%d", a);
	return 0;
}