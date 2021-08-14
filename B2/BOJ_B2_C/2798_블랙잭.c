#include <stdio.h>
#include <stdlib.h>

int a[100];
int main() {
	int n, m, i, j, k, b;
	scanf("%d %d", &n, &m);
	b = m;
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	for (i = 0; i < n - 2; i++)
		for (j = i + 1; j < n - 1; j++)
			for (k = j + 1; k < n; k++)
				if (m >= a[i] + a[j] + a[k])
					if (m - (a[i] + a[j] + a[k]) < b)
						b = m - (a[i] + a[j] + a[k]);
	printf("%d", m - b);
	return 0;
}