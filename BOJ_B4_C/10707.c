#include <stdio.h>
#define _min(a,b) a<b?a:b

int main() {
	int a, b, c, d, p;
	scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &p);
	printf("%d", _min(b + d * (p > c ? p - c : 0), a * p));
	return 0;
}