#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _strcmp(char* a, char* b, int n) {
	short i = 0;
	while (a[i] == b[i] && i < n) { i++; }
	return a[i] - b[i];
}

int c(char* a, char* b) {
	if (strlen(a) != strlen(b))
		return strlen(a) - strlen(b);
	else
		return _strcmp(a, b, strlen(a));
}

char a[20000][51];
int main() {
	short n, i, j, l;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", a[i]);
		l = strlen(a[i]);
		for (j = 0; j < i; j++)
			if (_strcmp(a[j], a[i], l) == 0) {
				i--, n--;
				break;
			}
	}
	qsort(a, n, sizeof(char) * 51, c);
	for (i = 0; i < n; i++)
		printf("%s\n", a[i]);
	return 0;
}