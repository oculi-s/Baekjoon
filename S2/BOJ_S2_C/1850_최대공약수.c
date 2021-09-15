#include <stdio.h>

typedef unsigned long long ld;

ld a, b, t;
int main() {
	scanf("%lld %lld", &a, &b);
	while (a % b)
		t = a, a = b % a, b = t;
	while (b--)
		printf("1");
	return 0;
}