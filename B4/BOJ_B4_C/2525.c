#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	scanf("%d %d\n%d", &a, &b, &c);
	a = (a + ((b + c) / 60)) % 24 , b = (b + c) % 60;
	printf("%d %d", a, b);
	return 0;
}