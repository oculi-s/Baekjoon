#include <stdio.h>
#include <string.h>

int _max(int a, int b) {
	return a > b ? a : b;
}

char a[101], b[101], c, i, n;
int main() {
	scanf("%s\n%c\n%s", a, &c, b);
	if (c == '*') {
		printf("1");
		for (; i < strlen(a) + strlen(b) - 2; i++)
			printf("0");
	}
	else if (strlen(a) == strlen(b)) {
		printf("2");
		for (; i < strlen(a) - 1; i++)
			printf("0");
	}
	else {
		n = _max(strlen(a), strlen(b));
		for (; i < n; i++)
			printf("%c", n - i == strlen(a) || n - i == strlen(b) ? '1' : '0');
	}
	return 0;
}