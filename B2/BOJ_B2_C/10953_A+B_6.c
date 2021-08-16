#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, a, b;
	char s[5];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		printf("%d\n", s[0] + s[2] - 96);
	}
	return 0;
}