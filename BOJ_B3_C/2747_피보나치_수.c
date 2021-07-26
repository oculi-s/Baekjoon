#include <stdio.h>

int main() {
	long long a = 0, b = 1, t;
	int n;
	scanf("%d", &n);
	while (n--)
		t = a, a += b, b = t;
	printf("%d", a);
	return 0;
}