#include <stdio.h>
#include <stdbool.h>

int v[301], p[2][301];
int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", v + i), p[0][i] = 0, p[1][i] = 0;
	p[0][1] = v[1], p[1][1] = 0, p[0][2] = v[1] + v[2], p[1][2] = v[2];
	for (i = 3; i <= n; i++) {
		p[0][i] = p[1][i - 1] + v[i];
		p[1][i] = (p[0][i - 2] > p[1][i - 2] ? p[0][i - 2] : p[1][i - 2]) + v[i];
	}
	printf("%d", p[0][n] > p[1][n] ? p[0][n] : p[1][n]);
	return 0;
}