#include <stdio.h>

char s[101], i;
int main() {
	gets(s);
	while (s[i])
		s[i] -= s[i] >= 'a' ? 32 : -32, printf("%c", s[i]), i++;
	return 0;
}