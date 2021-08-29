#include <stdio.h>

long long n, f, i;
int main() {
	scanf("%lld\n%lld", &n, &f);
	for (; i <= 99; i++)
		if (!((n / 100 * 100 + i) % f))
			break;
	if (i <= 9)
		printf("0");
	printf("%lld", i);
	return 0;
}