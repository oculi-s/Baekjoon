#include <stdio.h>

int n, a, b, i, p, q;
int main() {
	scanf("%d", &n);
	while (n--) {
		a = 0, b = 0;
		for (i = 0; i < 9; i++)
			scanf("%d %d", &p, &q), a += p, b += q;
		printf("%s\n", a == b ? "Draw" : a > b ? "Yonsei" : "Korea");
	}
	return 0;
}