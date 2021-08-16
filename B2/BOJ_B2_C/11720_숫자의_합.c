#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	char* s = malloc(sizeof(char) * n);
	scanf("%s", s);
	int a = 0;
	for (int i = 0; i < n; i++) {
		a += s[i] - 48;
	}
	printf("%d", a);
	return 0;
}