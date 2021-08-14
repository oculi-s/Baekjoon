#include <stdio.h>
#include <stdbool.h>

bool T[50][50], P[50][50];
int main() {
	int n, i, j, k, f[50], m = 0;
	char s[51];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", s), f[i] = 0;
		for (j = 0; j < n; j++)
			T[i][j] = s[j] == 'Y', P[i][j] = T[i][j];
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (T[i][j])
				for (k = 0; k < n; k++)
					if (T[j][k])
						P[i][k] = 1;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i != j)
				f[i] += P[i][j];
	for (i = 0; i < n; i++)
		m = m > f[i] ? m : f[i];
	printf("%d", m);
	return 0;
}