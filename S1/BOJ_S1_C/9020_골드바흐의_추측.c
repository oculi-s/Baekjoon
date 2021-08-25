#include <stdio.h>
#include <stdbool.h>
#define M 10000

bool p[M + 1];
int t, n, i, j, s[1300], e;
int main() {
	p[1] = 1;
	for (i = 2; i <= M; i++)
		if (!p[i])
			for (j = i * 2; j <= M; j += i)
				p[j] = 1;
	for (i = 1; i <= 10000; i++)
		if (!p[i])
			s[e] = i, e++;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i = 0; i < e; i++) {
			for (j = 0; j < e; j++)
				if (s[j] + s[j + i] == n) {
					printf("%d %d\n", s[j], s[j + i]);
					break;
				}
			if (s[j] + s[j + i] == n)
				break;
		}
	}
	return 0;
}