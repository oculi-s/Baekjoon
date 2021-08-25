#include <stdio.h>
#include <string.h>

char s[101], t[51];
void* _strrev(char* a, int n) {
	int e = 0;
	while (n)
		t[e] = a[n - 1], n--, e++;
}

int n;
int main() {
	scanf("%s", s);
	n = strlen(s), _strrev(s + (n + 1) / 2, n / 2);
	s[n / 2] = 0, t[n / 2] = 0;
	printf("%d", !strcmp(t, s));
	return 0;
}