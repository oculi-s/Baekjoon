#include <stdio.h>
#include <string.h>

int i, c;
char a[101];
int main() {
	scanf("%s", a);
	for (; i < strlen(a); i++)
		c += a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u';
	printf("%d", c);
	return 0;
}