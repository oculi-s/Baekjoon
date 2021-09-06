#include <stdio.h>
#include <string.h>

int n;
char s[61];
int main() {
	scanf("%d", &n);
	while (n--)
		scanf("%s", s), printf("%s\n", s[strlen(s) - 1] % 2 ? "odd" : "even");
	return 0;
}