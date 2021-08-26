#include <stdio.h>
#include <string.h>

char s[8];
int main() {
	scanf("%s", s);
	s[3] = 0;
	printf("%s", strcmp(s, "555") ? "NO" : "YES");
	return 0;
}