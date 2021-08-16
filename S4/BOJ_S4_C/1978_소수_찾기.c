#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, t;
	scanf("%d", &n);
	int m = n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		if (t == 1)
			m--;
		else
			for (int j = 2; j < t; j++) {
				if (t % j == 0) {
					m--;
					break;
				}
			}
	}
	printf("%d", m);
	return 0;
}