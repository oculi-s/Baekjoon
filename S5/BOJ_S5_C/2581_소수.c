#include <stdio.h>
#include <stdlib.h>

int main() {
	int m, n, i, j;
	scanf("%d %d", &m, &n);
	int* s = malloc(sizeof(int) * (n + 1));
	for (i = 2; i < n + 1; i++)
		if (s[i] != 1)
			for (j = 2 * i; j < n + 1; j += i)
				s[j] = 1;
	int c = 0, d = 0;
	m = m == 1 ? 2 : m;
	for (i = m, j = 0; i < n + 1; i++)
		if (s[i] != 1) {
			j += i;
			if (c == 0)
				d = i, c = 1;
		}
	if (j)
		printf("%d %d", j, d);
	else
		printf("%d", -1);
	return 0;
}