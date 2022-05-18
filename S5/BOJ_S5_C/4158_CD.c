#include <stdio.h>
#define M 1000010

int n, m, i, j, a[M], b[M], c, s;
int main() {
	scanf("%d %d", &n, &m);
	while (n + m) {
		c = 0, s = 0;
		for (i = 0; i < n; i++)
			scanf("%d", a + i);
		for (i = 0; i < m; i++)
			scanf("%d", b + i);
		i = 0; j = 0;
		while (i < n && j < m) {
			if (a[i] > b[j])
				j++;
			else if (a[i] < b[j])
				i++;
			else
				c++, i++, j++;
		}
		printf("%d\n", c);
		scanf("%d %d", &n, &m);
	}
}
