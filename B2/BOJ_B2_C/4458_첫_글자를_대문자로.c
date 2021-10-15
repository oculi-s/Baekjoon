#include <stdio.h>

int n;
char s[100];
int main() {
	scanf("%d\n", &n);
	while (n--)
		gets(s), s[0] += s[0] >= 'a' ? 'A' - 'a' : 0, printf("%s\n", s);
	return 0;
}