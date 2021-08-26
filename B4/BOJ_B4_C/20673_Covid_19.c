#include <stdio.h>

int main() {
	int a, b;
	scanf("%d\n%d", &a, &b);
	if (a <= 50 && b <= 10)
		printf("White");
	else if (b > 30)
		printf("Red");
	else
		printf("Yellow");
	return 0;
}