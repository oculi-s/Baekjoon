#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 0, b = 1, n, t;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		t = a;
		a = b;
		b += t;
	}
	printf("%d", a);
	return 0;
}