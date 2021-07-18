#include <stdio.h>
#include <stdlib.h>

int main() {
	int C;
	scanf("%d", &C);
	
	int i, j, k;
	float n, *s, m;
	for (i = 0; i < C; i++) {
		m = 0;
		scanf("%f", &n);
		s = malloc(sizeof(int) * n);
		for (j = 0; j < n; j++) {
			scanf("%f", s+j);
			m += s[j];
		}
		m /= n;
		k = 0;
		for (j = 0; j < n; j++) {
			if (s[j] > m) {
				k += 1;
			}
		}
		printf("%.3f%%\n", (float)(k / n) * 100);
	}
	return 0;
}