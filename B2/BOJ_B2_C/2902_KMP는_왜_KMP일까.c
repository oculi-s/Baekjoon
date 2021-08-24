#include <stdio.h>

char s[101];
int i;
int main() {
	scanf("%s", s);
	printf("%c", s[0]);
	while (s[i]) {
		if (s[i] == '-')
			printf("%c", s[i + 1]);
		i++;
	}
	return 0;
}