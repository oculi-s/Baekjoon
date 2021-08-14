#include <stdio.h>
#include <stdbool.h>

bool p[1000001] = { 0, };
int s[78498], e = 0;

int main() {
	int n, i, j, k, l;
	scanf("%d", &n);
	for (i = 2; i < n; i++)
		if (!p[i])
			for (j = i * 2; j < n; j += i)
				p[j] = 1;
	for (i = 2; i < n; i++)
		if (!p[i])
			s[e] = i, e++;
	for (i = 0; i < e; i++)
		for (j = i; j < e; j++)
			for (k = j; k < e; k++)
				for (l = k; l < e; l++)
					if (s[i] + s[j] + s[k] + s[l] == n) {
						printf("%d %d %d %d", s[i], s[j], s[k], s[l]);
						return 0;
					}
	printf("-1");
	return 0;
}