#include <stdio.h>

int n, i, j;
char s[21], c;
int main() {
	scanf("%d", &n);
	while (i < n) {
		c = 0;
		while (c != '\n') {
			scanf("%s%c", s, &c);
			for (j = strlen(s) - 1; j >= 0; j--)
				printf("%c", s[j]);
			printf(" ");
		}
		printf("\n");
		i++;
	}
	return 0;
}