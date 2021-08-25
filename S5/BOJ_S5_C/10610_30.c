#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* _c(char* a, char* b) {
	return *b - *a;
}

int t, i;
char s[100001];
int main() {
	scanf("%s", s);
	int n = strlen(s);
	qsort(s, n, sizeof(char), _c);
	for (i = 0; i < n - 1; i++)
		t += s[i] - '0';
	if (s[n - 1] == '0' && !(t % 3))
		printf("%s", s);
	else
		printf("-1");
	return 0;
}