#include <stdio.h>
char s[5][16];

int main() {
	int i, j;
	for (i = 0; i < 5; i++)
		scanf("%s", s[i]);
	for (i = 0; i < 15; i++)
		for (j = 0; j < 5; j++)
			if (s[j][i])
				printf("%c", s[j][i]);
	return 0;
}