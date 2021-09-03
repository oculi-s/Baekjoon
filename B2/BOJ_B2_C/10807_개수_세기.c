#include <stdio.h>

int n, c[201], v, t;
int main() {
	scanf("%d", &n);
	while (n--)
		scanf("%d", &t), c[t + 100]++;
	scanf("%d", &v);
	printf("%d", c[v + 100]);
	return 0;
}