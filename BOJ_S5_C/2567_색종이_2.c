#include <stdio.h>
#include <stdbool.h>

bool m[102][102];
int main() {
	int n, i, j, x, y, s = 0;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d", &x, &y);
		for (i = y; i < y + 10; i++)
			for (j = x; j < x + 10; j++)
				m[i][j] = 1;
	}
	for (i = 1; i <= 100; i++)
		for (j = 1; j <= 100; j++)
			if (m[i][j])
				if (!(m[i - 1][j] * m[i + 1][j] * m[i][j - 1] * m[i][j + 1])) {
					s++;
					if (m[i - 1][j] + m[i + 1][j] + m[i][j - 1] + m[i][j + 1] == 2)
						s++;
				}
	printf("%d", s);
	return 0;
}