#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, x, t;
	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++) {
		scanf("%d ", &t);
		if (t < x)
			printf("%d ", t);
	}
	return 0;
}