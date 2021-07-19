#include <stdio.h>

int main() {
	int n, i, c = 1, p[100];
	char s[110][70], t[10], a[10];
	scanf("%s", a);
	while (*a != '0') {
		n = *a - 48;
		for (i = 0; i < n; i++)
			scanf("\n%[^\n]s", s[i]), p[i] = 0;
		for (i = 0; i < 2 * n - 1; i++)
			scanf("\n%[^\n]s", t), p[*t - 49]++;
		for (i = 0; i < n; i++)
			if (p[i] == 1)
				printf("%d %s\n", c, s[i]);
		scanf("\n%s", a), c++;
	}
	return 0;
}
