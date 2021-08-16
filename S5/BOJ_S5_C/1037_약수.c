#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, a, i , m = 0, n = 1000000;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &a);
		if (a > m)
			m = a;
		if (n > a)
			n = a;
	}
	printf("%d", m * n);
	return	0;
}