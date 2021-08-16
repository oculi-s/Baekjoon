#include <stdio.h>
#include <stdlib.h>

int main() {
	int t, k, n;
	int p[14];
	for (int i = 0; i < 14; i++) {
		p[i] = i + 1;
	}
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		for (int i = 0; i < 14; i++) {
			p[i] = i + 1;
		}
		scanf("%d", &k);
		scanf("%d", &n);
		for (int j = 0; j < k; j++) {
			for (int s = 0; s < n - 1; s++) {
				p[s + 1] += p[s];
			}
		}
		printf("%d\n", p[n - 1]);
	}
	return 0;
}