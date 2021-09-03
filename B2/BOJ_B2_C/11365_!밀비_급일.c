#include <stdio.h>
#include <string.h>

int i;
char s[501];
int main() {
	gets(s);
	while (strcmp(s, "END")) {
		for (i = strlen(s); i; i--)
			printf("%c", s[i - 1]);
		printf("\n"), gets(s);
	}
	return 0;
}