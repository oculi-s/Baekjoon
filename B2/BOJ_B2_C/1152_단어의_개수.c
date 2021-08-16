#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 0;
	char* s = malloc(sizeof(char) * 1000000);
	while (scanf("%s", s) != EOF) {
		n += 1;
		s[0] = NULL;
	}
	printf("%d", n);
	return 0;
}