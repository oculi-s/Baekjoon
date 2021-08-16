#include <stdio.h>
#include <stdlib.h>

int main() {
	int t, n, m, i, j, d, v;
	long long s[30];
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		for (j = 0; j < 30; j++)
			s[j] = j + 1;
		scanf("%d %d", &n, &m);
		n--, d = m - n;
		while (n-- >= 1)
			for (j = 1; j <= d + 1; j++)
				s[j] += s[j - 1];
		printf("%d\n", s[d-1]);
	}
	return 0;
}