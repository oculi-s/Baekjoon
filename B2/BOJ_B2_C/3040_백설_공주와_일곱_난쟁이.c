#include <stdio.h>

int i, j, k, x[9], s;
int main() {
	for (; i < 9; i++)
		scanf("%d", x + i), s += x[i];
	for (i = 0; i < 9; i++)
		for (j = i + 1; j < 9; j++)
			if (s - (x[i] + x[j]) == 100) {
				for (k = 0; k < 9; k++)
					if (k != i && k != j)
						printf("%d\n", x[k]);
				return 0;
			}
}