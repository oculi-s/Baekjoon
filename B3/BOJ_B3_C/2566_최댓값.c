#include <stdio.h>

int a[9][9], m, i, j;
int main() {
	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
			scanf("%d", &a[i][j]), m = m > a[i][j] ? m : a[i][j];
	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
			if (m == a[i][j]) {
				printf("%d\n%d %d", m, i + 1, j + 1);
				return 0;
			}
}