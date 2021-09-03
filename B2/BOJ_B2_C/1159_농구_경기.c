#include <stdio.h>

char s[32];
int c[27], n;
int main() {
	scanf("%d", &n);
	while (n--)
		scanf("%s", s), c[s[0] - 'a']++;
	for (n = 0; n < 26; n++)
		if (c[n] >= 5)
			c[26] = 1, printf("%c", n + 'a');
	if (!c[26])
		printf("PREDAJA");
	return 0;
}