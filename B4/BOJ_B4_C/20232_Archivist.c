#include <stdio.h>

int n;
int main() {
	scanf("%d", &n);
	n %= 100;
	if (n == 18 || n == 13 || n == 7 || n == 8 || !n || n == 96 || n == 97)
		printf("SPbSU");
	else if (n == 6)
		printf("PetrSU, ITMO");
	else
		printf("ITMO");
	return 0;
}