#include <stdio.h>
#include <string.h>
#define M 333335

char e[8][4] = { "000","001","010","011","100","101","110","111" }, t, a[M * 3];
int main() {
	int i = 0, j = 0;
	while (scanf("%c", &t) != EOF)
		strcpy(a + i, e[t - '0']), i += 3;
	while (a[j] == '0' && a[j + 1])
		j++;
	printf("%s", a + j);
	return 0;
}