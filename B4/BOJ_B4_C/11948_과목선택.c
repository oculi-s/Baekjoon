#include <stdio.h>

int main() {
	int s = 0, t, i = 4, j = 2, m = 100, n = 100;
	while (i--)
		scanf("%d", &t), s += t, m = t < m ? t : m;
	while (j--)
		scanf("%d", &t), s += t, n = t < n ? t : n;
	printf("%d", s - m - n);
	return 0;
}