#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[20], b[20], c[20], d[20];
int main() {
	scanf("%s %s %s %s", a, b, c, d);
	strcpy(a + strlen(a), b), strcpy(c + strlen(c), d);
	printf("%lld", atoll(a) + atoll(c));
	return 0;
}