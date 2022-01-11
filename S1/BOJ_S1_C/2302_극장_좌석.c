#include <stdio.h>

int n, m, t, i, v[41], a[2][41];
int main() {
	scanf("%d\n%d", &n, &m);
	while (m--)
		scanf("%d", &t), v[t] = 1;
	a[0][0] = 1;
	for (i = 1; i <= n; i++)
		if (!v[i] && !v[i + 1])
			a[0][i] = a[0][i - 1] + a[1][i - 1], a[1][i] = a[0][i - 1];
		else
			a[0][i] = a[0][i - 1] + a[1][i - 1];
	printf("%d", a[0][n]);
	return 0;
}
