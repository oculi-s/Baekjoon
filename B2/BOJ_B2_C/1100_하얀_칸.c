#include <stdio.h>

char s[9][9], t[9];
int main() {
	int i, j, c = 0;
	for (i = 0; i<8; i++) {
		scanf("%s", t);
		for (j = 0; j < 8; j++)
			s[i][j] = t[j] == 'F';
	}
	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
			if ((i + j) % 2 == 0 && s[i][j])
				c++;
	printf("%d", c);
	return 0;
}