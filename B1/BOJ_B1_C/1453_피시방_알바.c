#include <stdio.h>
#include <stdbool.h>

bool p[101];
int i, n, t, c;
int main() {
	scanf("%d", &n);
	for (; i < n; i++)
		scanf("%d", &t), c += p[t] == 1, p[t] = 1;
	printf("%d", c);
	return 0;
}