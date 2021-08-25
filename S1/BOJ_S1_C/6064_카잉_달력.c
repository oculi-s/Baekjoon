#include <stdio.h>

int t, m, n, x, y, i, j, v, o;
int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d %d %d", &m, &n, &x, &y);
		if (y > n || x > m)
			printf("-1\n");
		else {
			v = x, i = x, j = x % n, y %= n, o = j;
			while (j != y) {
				j += m, v += m, j %= n;
				if (j == o)
					break;
			}
			if (j == o && j != y)
				printf("-1\n");
			else
				printf("%d\n", v);
		}
	}
	return 0;
}