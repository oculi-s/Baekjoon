#include <stdio.h>
#include <string.h>

int i, v = 10;
char s[51];
int main() {
	gets(s);
	for (i = 1; i < strlen(s); i++)
		v += (s[i - 1] == s[i]) ? 5 : 10;
	printf("%d", v);
	return 0;
}