#include <stdio.h>
#include <stdbool.h>
#define M 10000000

bool p[2*M+1];
int m, n, t;
int main() {
	scanf("%d", &n);
	while (n--)
		scanf("%d", &t), p[t + M] = 1;
	scanf("%d", &m);
	while (m--)
		scanf("%d", &t), printf("%d ", p[t + M]);
	return 0;
}