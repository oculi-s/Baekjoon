#include <stdio.h>

int i;
char s[1001];
int main() {
	scanf("%s", s);
	for (; s[i]; i++)
		s[i] -= 3, printf("%c", s[i] < 'A' ? s[i] + 26 : s[i]);
	return 0;
}