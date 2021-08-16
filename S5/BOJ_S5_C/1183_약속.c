#include <stdio.h>
#include <stdlib.h>
int _abs(int a) {
	return a > 0 ? a : -a;
}

void _qsort(int* s, int n) {
	if (n > 0) {
		int L = 1, H = n - 1, t;
		while (L) {
			while (L < n && s[L] <= s[0]) { L++; }
			while (0 < H && s[H] >= s[0]) { H--; }
			if (L >= H)
				L = 0;
			t = s[L], s[L] = s[H], s[H] = t;
		}
		_qsort(s, H), _qsort(s + H + 1, n - H - 1);
	}
}

int main() {
	int n, s, a, i, s1, s2, s3;
	scanf("%d", &n);
	int* S = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
		scanf("%d %d", &s, &a), S[i] = s - a;
	_qsort(S, n);
	if (n % 2)
		printf("1");
	else
		printf("%d",_abs(S[n / 2] - S[n / 2 - 1] + 1));
	return 0;
}