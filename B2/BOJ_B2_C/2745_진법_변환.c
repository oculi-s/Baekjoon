#include <stdio.h>
#include <string.h>

int n, b, i, c = 1;
char s[40];
int main() {
	scanf("%s %d", s, &b);
	for (i = strlen(s) - 1; i >= 0; i--)
		s[i] -= s[i] >= 'A' ? 55 : 48,  n += c * s[i], c *= b;
	printf("%d", n);
	return 0;
}