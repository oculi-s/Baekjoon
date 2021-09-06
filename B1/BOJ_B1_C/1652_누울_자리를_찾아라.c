#include <stdio.h>
#include <stdbool.h>

bool a[101][101];
int i, j, k, n, b, c;
char t[101];
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", t);
		for (j = 0; j < n; j++)
			a[i][j] = t[j] == 'X';
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n - 1; j++)
			if (a[i][j] + a[i][j + 1] == 0) {
				b++;
				while (a[i][j] + a[i][j + 1] == 0 && j < n - 1)
					j++;
			}
	for (i = 0; i < n; i++)
		for (j = 0; j < n - 1; j++)
			if (a[j][i] + a[j + 1][i] == 0) {
				c++;
				while (a[j][i] + a[j + 1][i] == 0 && j < n - 1)
					j++;
			}
	printf("%d %d", b, c);
	return 0;
}