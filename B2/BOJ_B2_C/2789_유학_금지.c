#include <stdio.h>
#include <string.h>

int _in(char a) {
	if (a <= 'E' || a == 'G' || a == 'I' || a == 'R' || a == 'M')
		return 1;
	return 0;
}

int i;
char s[101], a[101];
int main() {
	scanf("%s", s);
	for (; i < strlen(s); i++)
		if (_in(s[i]))
			a[i] = 1;
	for (i = 0; i < strlen(s); i++)
		if (!a[i])
			printf("%c", s[i]);
	return 0;
}