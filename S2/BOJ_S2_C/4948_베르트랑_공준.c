#include <stdio.h>
#include <stdbool.h>
#define M 123460

bool p[M * 2 + 1];
int main() {
	int n, i, j, c;
	p[1] = 1;
	for (i = 2; i < 2 * M; i++)
		if (!p[i])
			for (j = i * 2; j < 2 * M; j += i)
				p[j] = 1;
	scanf("%d", &n);
	while (n) {
		c = 0;
		for (i = n + 1; i <= 2 * n; i++)
			c += !p[i];
		printf("%d\n", c);
		scanf("%d", &n);
	}
	return 0;
}