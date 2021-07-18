#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d;
	scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
	if (a < b && b < c && c < d)
		printf("Fish Rising");
	else if (a > b && b > c && c > d)
		printf("Fish Diving");
	else if (a == b && b == c && c == d)
		printf("Fish At Constant Depth");
	else
		printf("No Fish");
	return 0;
}