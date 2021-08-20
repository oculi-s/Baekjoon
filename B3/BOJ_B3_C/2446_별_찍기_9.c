#include <stdio.h>

char s[200];
int n, i, j;
int main() {
	scanf("%d", &n);
	for (i = 0; i < 2 * n - 1; i++)
		s[i] = '*';
	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++)
			s[j] = ' ';
		s[2 * n - 1 - i] = 0;
		printf("%s\n", s);
	}
	for (i = n - 1; i; i--) {
		for (j = 0; j < i - 1; j++)
			printf(" ");
		for (j = i; j < 2 * n - i + 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}