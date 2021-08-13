#include <stdio.h>
#include <stdbool.h>

bool m[100][100];
int main() {
	int n, i, j, x, y, s = 0;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d", &x, &y);
		for (i = y; i < y + 10; i++)
			for (j = x; j < x + 10; j++)
				m[i][j] = 1;
	}
	for (i = 0; i < 100; i++)
		for (j = 0; j < 100; j++)
			s += m[i][j];
	printf("%d", s);
	return 0;
}