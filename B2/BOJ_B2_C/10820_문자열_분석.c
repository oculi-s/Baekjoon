#include <stdio.h>
#include <string.h>

int _c(char a) {
	if (a == ' ')
		return 3;
	else if (a <= '9')
		return 2;
	else if (a <= 'Z')
		return 1;
	else
		return 0;
}

int i, c[4];
char s[101];
int main() {
	while (gets(s)) {
		c[0] = 0, c[1] = 0, c[2] = 0, c[3] = 0;
		for (i = 0; i < strlen(s); i++)
			c[_c(s[i])]++;
		for (i = 0; i < 4; i++)
			printf("%d ", c[i]);
		printf("\n");
	}
	return 0;
}