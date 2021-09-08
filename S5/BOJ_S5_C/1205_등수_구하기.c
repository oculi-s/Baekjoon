#include <stdio.h>

int p, n, v, i, x[51];
int main() {
	scanf("%d %d %d", &n, &v, &p);
	for (i = 1; i <= p; i++)
		x[i] = -1;
	for (i = 1; i <= n; i++)
		scanf("%d", x + i);
	if (x[p] >= v)
		printf("-1");
	else {
		i = 1;
		while (x[i] > v)
			i++;
		printf("%d", i);
	}
	return 0;
}