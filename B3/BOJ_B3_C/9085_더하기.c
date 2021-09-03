#include <stdio.h>

int t, n, s, a;
int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n), s = 0;
		while (n--)
			scanf("%d", &a), s += a;
		printf("%d\n", s);
	}
	return 0;
}