#include <stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	d = a < b&& a < c ? 0 : b < c ? 1 : 2;
	if (a + b + c >= 100)
		printf("OK");
	else
		printf("%s", !d ? "Soongsil" : d == 1 ? "Korea" : "Hanyang");
	return 0;
}