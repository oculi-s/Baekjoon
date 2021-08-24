#include <stdio.h>

int c[26], e, i;
int main() {
	char s[101];
	scanf("%s", s);
	while (s[e])
		c[s[e] - 'a']++, e++;
	for (i = 0; i < 26; i++)
		printf("%d ", c[i]);
	return 0;
}