#include <stdio.h>

int a, b, c, s;
int main() {
	scanf("%d %d %d", &a, &b, &c);
	s = a + b + c;
	a = a < b&& a < c ? a : b < c ? b : c;
	printf("%d", s - a);
	return 0;
}