#include <stdio.h>
#include <stdbool.h>
#define M 1000000

bool p[2*M+1];
int n, t;
int main() {
	scanf("%d", &n);
	while (n--)
		scanf("%d", &t), p[t + M] = 1;
	for (n = 2 * M; n >= 0; n--)
		if (p[n])
			printf("%d\n", n - M);
	return 0;
}