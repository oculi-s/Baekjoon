#include <stdio.h>

int n, i, j;
char s[200];
int main() {
	scanf("%d", &n);
	for (i = n; i; i--) {
		for (j = 0; j < 2 * n - i + 1; j++)
			s[j] = ' ';
		s[i] = '*', s[2 * n - i] = '*', s[2 * n - i + 1] = 0;
		printf("%s\n", s + 1);
	}
	return 0;
}