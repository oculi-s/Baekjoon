#include <stdio.h>
#include <string.h>

char a[101];
int i;
int main() {
	gets(a);
	for (i = 0; i < strlen(a); i++) {
		if (a[i] >= 'a')
			printf("%c", (a[i] - 'a' + 13) % 26 + 'a');
		else if (a[i] >= 'A')
			printf("%c", (a[i] - 'A' + 13) % 26 + 'A');
		else
			printf("%c", a[i]);
	}
	return 0;
}