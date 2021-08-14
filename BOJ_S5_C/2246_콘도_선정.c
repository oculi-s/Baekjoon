#include <stdio.h>
#define M 10000

void _qsort(int C[M][2], int n, int a) {
	if (n > 0) {
		int L = 1, H = n - 1,T[2], i;
		while (L) {
			while (L < n && C[0][a] >= C[L][a]) { L++; }
			while (0 < H && C[0][a] <= C[H][a]) { H--; }
			if (L >= H)
				L = 0;
			T[0] = C[L][0], T[1] = C[L][1];
			for (i = 0; i < 2; i++)
				C[L][i] = C[H][i], C[H][i] = T[i];
		}
		_qsort(C, H, a), _qsort(C + H + 1, n - H - 1, a);
	}
}

int main() {
	int n, i, j, C[M][2], c = 1;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d %d", &C[i][0], &C[i][1]);
	_qsort(C, n, 0);
	for (i = 0; i < n; i++) {
		j = i;
		while (C[i][0] == C[i + 1][0])
			i++;
		_qsort(&(C[j]), i - j + 1, 1);
	}
	for (i = 1; i < n; i++) {
		if (C[i - 1][0] != C[i][0])
			for (j = 0; j < i; j++)
				if (C[j][1] <= C[i][1])
					break;
		if (j == i)
			c++;
	}
	printf("%d", c);
	return 0;
}