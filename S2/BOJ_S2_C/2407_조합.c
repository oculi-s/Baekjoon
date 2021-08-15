#include <stdio.h>
#include <string.h>

char p[101][101][35], s[35];
void _sum(char* a, char* b, char* c) {
	int m = strlen(a), n = strlen(b), u = 0, l, t = 0;
	l = 1 + (m > n ? m : n), c[l] = 0;
	while (l) {
		t = u, l--;
		if (m)
			m--, t += a[m] - 48;
		if (n)
			n--, t += b[n] - 48;
		c[l] = t % 10 + 48, u = t >= 10;
	}
	if (!t)
		strcpy(s, c + 1), strcpy(c, s);
}

int main() {
	int i, j, n, k;
	scanf("%d %d", &n, &k);
	for (i = 0; i <= n; i++)
		strcpy(p[i][0], "1"), strcpy(p[i][i], "1");
	for (i = 2; i <= n; i++)
		for (j = 1; j < i; j++)
			_sum(p[i - 1][j - 1], p[i - 1][j], p[i][j]);
	printf("%s", p[n][k]);
	return 0;
}