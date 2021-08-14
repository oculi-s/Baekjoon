#include <stdio.h>

int main() {
	int n, a = 1, b = 1, t;
	scanf("%d", &n);
	while (n--)
		t = a, a = (a + b) % 15746, b = t;
	printf("%d", b);
	return 0;
}