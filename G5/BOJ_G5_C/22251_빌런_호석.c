#include <stdio.h>

int main() {
	int D[10][10] = {
		{0, 4, 3, 3, 4, 3, 2, 3, 1, 2},
		{4, 0, 5, 3, 2, 5, 6, 1, 5, 4},
		{3, 5, 0, 2, 5, 4, 3, 4, 2, 3},
		{3, 3, 2, 0, 3, 2, 3, 2, 2, 1},
		{4, 2, 5, 3, 0, 3, 4, 3, 3, 2},
		{3, 5, 4, 2, 3, 0, 1, 4, 2, 1},
		{2, 6, 3, 3, 4, 1, 0, 5, 1, 2},
		{3, 1, 4, 2, 3, 4, 5, 0, 4, 3},
		{1, 5, 2, 2, 3, 2, 1, 4, 0, 1},
		{2, 4, 3, 1, 2, 1, 2, 3, 1, 0}
	};
	int i, j, t, s, x, N, K, P, X, c = 0;
	scanf("%d %d %d %d", &N, &K, &P, &X);
	for (i = 1; i <= N; i++) {
		t = i, x = X, s = 0;
		for (j = 0; j < K; j++)
			s += D[t % 10][x % 10], t /= 10, x /= 10;
		if (s <= P)
			c++;
	}
	printf("%d", c - 1);
	return 0;
}