#include <stdio.h>
#include <stdlib.h>

int main() {
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld", b > a ? b - a : a - b);
	return 0;
}