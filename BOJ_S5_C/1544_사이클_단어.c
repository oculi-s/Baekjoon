#include <stdio.h>
#include <stdbool.h>

bool _same(char* a, char* b, int L) {
	int i, j;
	for (i = 0; i < L; i++) {
		for (j = 0; j < L; j++)
			if (a[(i + j) % L] != b[j])
				break;
		if (j == L)
			return 1;
	}
	return 0;
}

int main() {
	int n, i, j, k, l, L, a = 0, e = 0;
	bool g;
	char s[50][55], t[50];
	for (i = 0; i < 50; i++)
		for (j = 0; j <= 54; j++)
			s[i][j] = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		L = 0, g = 1;
		scanf("%s", t);
		while (t[L++]);
		L--;
		for (j = 0; j < e; j++)
			if (s[j][54] == L)
				if (_same(t, s[j], L)) {
					g = 0;
					break;
				}
		if (g) {
			for (l = 0; l < L; l++)
				s[e][l] = t[l];
			s[e][54] = L, e++;
		}
	}
	printf("%d", e);
	return	0;
}