#include <stdio.h>

int t, n, i, j, x, p[1002][1002], c;
void _rec(int i) {
	for (j = 1; j <= n; j++)
		if (p[i][j])
			p[i][j] = 0, _rec(j);
}

int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i = 1; i <= n; i++)
			scanf("%d", &x), p[i][x] = 1;
		c = 0;
		for (i = 1; i <= n; i++)
			for (j = i; j <= n; j++)
				if (p[i][j])
					p[i][j] = 0, _rec(j), c++;
		printf("%d\n", c);
	}
	return 0;
}