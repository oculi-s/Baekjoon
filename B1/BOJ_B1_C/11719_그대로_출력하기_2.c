#include <stdio.h>

char s;
int main() {
	while (scanf("%c", &s) != EOF)
		printf("%c", s);
	return 0;
}