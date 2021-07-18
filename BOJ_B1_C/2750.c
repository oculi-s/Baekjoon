#include <stdio.h>
#include <stdlib.h>

int main() {
	int M[2001], n, t, i, j;
	for (i = 0; i < 2001; i++)
		M[i] = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &t);
		M[t + 1000]++;
	}
	for (i = 0; i < 2001; i++)
		for (j = 0; j < M[i]; j++)
			printf("%d\n", i - 1000);
	return 0;
}