#include <stdio.h>
#include <stdbool.h>

bool p[1001];
int n, k, i, j, c;
int main() {
	scanf("%d %d", &n, &k);
	for (i = 2; i <= n; i++)
		if (!p[i]) {
			for (j = i; j <= n; j += i) {
				if (!p[j]) {
					p[j] = 1, c++;
					if (c == k) {
						printf("%d", j);
						return 0;
					}
				}
			}
		}
}