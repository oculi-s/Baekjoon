#include <stdio.h>
#include <string.h>

char a[1000], b[1000];
int main() {
	scanf("%s\n%s", a, b);
	printf("%s", strlen(a) < strlen(b) ? "no" : "go");
	return 0;
}