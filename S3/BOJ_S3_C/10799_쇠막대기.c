#include <stdio.h>

char s[100001];
int i, c, d, a;
int main() {
	scanf("%s", s);
	for (i = 0; s[i + 1]; i++) {
		if (s[i] == '(') {
			c++;
			if (s[i + 1] == ')')
				c--, a += c + d, d = 0, i++;
		}
		else
			c--, d++;
	}
	printf("%d", a + c + d);
	return 0;
}
