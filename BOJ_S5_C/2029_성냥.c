#include <stdio.h>
#include <stdbool.h>

int main() {
	char s[11][11];
	bool h[4][3], v[3][4];
	int i, j, c = 0, d = 0;
	for (i = 0; i < 10; i++)
		scanf("%s", s[i]);
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			h[i][j] = s[3 * i][3 * j + 1] == '-', d += !h[i][j];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			v[i][j] = s[3 * i + 1][3 * j] == '|', d += !v[i][j];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if (h[i][j] && h[i + 1][j] && v[i][j] && v[i][j + 1])
				c++;
	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; j++)
			if (h[i][j] && h[i][j + 1] && h[i + 2][j] && h[i + 2][j + 1])
				if (v[i][j] && v[i + 1][j] && v[i][j + 2] && v[i + 1][j + 2])
					c++;
	if (h[0][0] && h[0][1] && h[0][2])
		if (h[3][0] && h[3][1] && h[3][2])
			if (v[0][0] && v[1][0] && v[2][0])
				if (v[3][0] && v[3][1] && v[3][2])
					c++;
	printf("%d %d", d, c);
	return 0;
}