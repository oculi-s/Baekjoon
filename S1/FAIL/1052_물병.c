#include <stdio.h>

int main() {
	int n, k, c = 0, t;
	scanf("%d %d", &n, &k);
	while (n) {
		t = 1;
		while (n > t * 2)
			t *= 2;
		n -= t, k--;
	}
	printf("%d", k < 0 ? -k : 0);
	return 0;
}