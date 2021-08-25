#include <stdio.h>

int n, k, i, c;
int main() {
	scanf("%d %d", &n, &k);
	for (i = 1; i <= n && c < k; i++)
		if (!(n % i))
			c++;
	if (c == k)
		printf("%d", i - 1);
	else
		printf("0");
	return 0;
}