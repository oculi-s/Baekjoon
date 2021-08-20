#include <stdio.h>
#include <stdlib.h>

int* _c(int *a, int *b) {
	return *a - *b;
}

int x[9], i, j, k, s = 0;
int main() {
	for (i = 0; i < 9; i++)
		scanf("%d", x + i), s += x[i];
	qsort(x, 9, sizeof(int), _c);
	for (i = 0; i < 9; i++)
		for (j = i + 1; j < 9; j++)
			if (s - x[i] - x[j] == 100) {
				for (k = 0; k < 9; k++)
					if (k != i && k != j)
						printf("%d\n", x[k]);
				return 0;
			}
}