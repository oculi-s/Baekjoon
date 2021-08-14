#include <stdio.h>

int main() {
	short t, a, b;
	scanf("%hd", &t);
	while (t--)
		scanf("%hd %hd", &a, &b), printf("%hd\n", 2 + b - a);
}