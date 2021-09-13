#include <stdio.h>

int n, t, a, b;
int main() {
	scanf("%d", &n);
	while (n--)
		scanf("%d", &t), a += (t + 30) / 30 * 10, b += (t + 60) / 60 * 15;
	if (a < b)
		printf("Y %d", a);
	else if (a > b)
		printf("M %d", b);
	else
		printf("Y M %d", a);
	return 0;
}