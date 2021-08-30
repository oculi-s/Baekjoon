#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool p[2001];
int n, t;
int main() {
	scanf("%d", &n);
	while (n--)
		scanf("%d", &t), p[t+1000] = 1;
	for (t = 0; t < 2001; t++)
		if (p[t])
			printf("%d ", t - 1000);
	return 0;
}