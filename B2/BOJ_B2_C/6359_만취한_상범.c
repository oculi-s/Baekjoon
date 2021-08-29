#include <stdio.h>

int n, i, j, k, a, s, x[101];
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		for (j = 1; j <= a; j++)
			x[j] = 0;
		for (j = 1; j <= a; j++)
			for (k = j; k <= a; k += j)
				x[k] = !x[k];
		s = 0;
		for (j = 1; j <= a; j++)
			s += x[j];
		printf("%d\n", s);
	}
	return 0;
}