#include <stdio.h>

int a[4][2], b[3], i, j;
int main() {
	for (i = 0; i < 4; i++)
		for (j = 0; j < 2; j++)
			scanf("%d", &(a[i][j]));
	for (i = 3; i; i--)
		if (a[i][1] > a[i][0])
			b[i - 1] = a[i][1] - a[i][0], a[i - 1][0] -= b[i - 1];
	for (i = 0; i < 3; i++)
		printf("%d\n", b[i]);
	return 0;
}
