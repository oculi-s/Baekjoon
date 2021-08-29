#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _c(char a[1001], char b[1001]) {
	return strcmp(a, b);
}

int i, n;
char s[1001][1001];
int main() {
	scanf("%s", s[0]);
	n = strlen(s[0]);
	for (i = 1; i < n; i++)
		strcpy(s[i], s[0] + i);
	qsort(s, n, 1001, _c);
	for (i = 0; i < n; i++)
		printf("%s\n", s[i]);
	return 0;
}