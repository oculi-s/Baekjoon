#include <stdio.h>

char s, c;
int main() {
	while (scanf("%c", &s) != EOF) {
		printf("%c", s), c++;
		if (c == 10)
			printf("\n"), c = 0;
	}
	return 0;
}