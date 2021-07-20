#include <stdio.h>
#include <stdbool.h>

int _num(char a) {
	return a == 'A' ? 0 : a == 'C' ? 1 : a == 'G' ? 2 : 3;
}

int main() {
	int n, m, i, j, c[4], t, d = 0;
	char s[1000][50], a[4] = "ACGT";
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%s", s[i]);
	for (j = 0; j < m; j++) {
		c[0] = 0, c[1] = 0, c[2] = 0, c[3] = 0, t = 0;
		for (i = 0; i < n; i++)
			c[_num(s[i][j])]++;
		for (i = 0; i < 4; i++)
			if (t < c[i])
				t = c[i];
		for (i = 0; i < 4; i++)
			if (t == c[i]) {
				printf("%c", a[i]), d += n - c[i];
				break;
			}
	}
	printf("\n%d", d);
	return 0;
}