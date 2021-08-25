#include <stdio.h>
#include <stdbool.h>
#define M 1000000

int p[M + 1];
int n, i, j, e;
int main() {
	p[1] = 1;
	for (i = 2; i <= M; i++)
		p[i] = i;
	for (i = 2; i <= M; i++)
		if (p[i])
			for (j = i * 2; j <= M; j += i)
				p[j] = 0;
	scanf("%d", &n);
	while (n){
		for (i = 3; i <= M; i++)
			if (p[i] && p[n - i]) {
				printf("%d = %d + %d\n", n, p[i], p[n - i]);
				break;
			}
		scanf("%d", &n);
	}
	return 0;
}