#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	int t = b;
	while (t>0) {
		printf("%d\n", a * (t % 10));
		t /= 10;
	}
	printf("%d", a*b);
	return 0;
}