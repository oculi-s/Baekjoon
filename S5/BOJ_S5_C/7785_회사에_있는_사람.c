#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _c(char a[7], char b[7]) {
	return strcmp(b, a);
}

int n, i;
char a[1000001][6], t[6];
int main() {
	scanf("%d", &n);
	for (; i < n; i++)
		scanf("%s %s", a[i], t);
	qsort(a, n, 6, _c);
	for (i = 0; i < n; i++)
		if (!strcmp(a[i], a[i + 1]))
			i++;
		else
			printf("%s\n", a[i]);
	return 0;
}