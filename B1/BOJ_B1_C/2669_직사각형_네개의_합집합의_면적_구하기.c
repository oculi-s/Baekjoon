#include <stdio.h>
#include <stdbool.h>

bool p[101][101];
int i, j, r1, r2, c1, c2, n = 4, c;
int main() {
	while (n--) {
		scanf("%d %d %d %d", &c1, &r1, &c2, &r2);
		for (i = r1; i < r2; i++)
			for (j = c1; j < c2; j++)
				p[i][j] = 1;
	}
	for (i = 0; i < 100; i++)
		for (j = 0; j < 100; j++)
			if (p[i][j])
				c++;
	printf("%d", c);
	return 0;
}