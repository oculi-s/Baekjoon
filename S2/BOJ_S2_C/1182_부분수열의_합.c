#include <stdio.h>

int n, k, i, j, c = 0, p[20], s[2][1000], e, t;
int main() {
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++)
		scanf("%d", p + i), s[0][i] = i, s[1][i] = p[i];
	e = n - 1;
	while (e >= 0) {
		i = s[0][e], t = s[1][e], e--, c += t == k;
		for (j = i + 1; j < n; j++)
			e++, s[0][e] = j, s[1][e] = t + p[j];
	}
	printf("%d", c);
	return 0;
}