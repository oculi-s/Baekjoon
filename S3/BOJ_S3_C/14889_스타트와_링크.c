#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int n, v[20][20], i, j, m = 1e9;

void _rec(bool p[20], int s, int c, int e) {
	int i, j, a, t;
	if (c == n / 2) {
		t = 0;
		for (i = 0; i < n; i++)
			if (!p[i])
				for (j = i + 1; j < n; j++)
					if (!p[j])
						t += v[i][j] + v[j][i];
		m = abs(s - t) < m ? abs(s - t) : m;
	}
	else  if (c < n / 2) {
		bool t[20];
		for (i = e; i < n; i++) {
			if (!p[i]) {
				a = s;
				for (j = 0; j < n; j++) {
					t[j] = p[j];
					if (p[j])
						a += v[i][j] + v[j][i];
				}
				t[i] = 1, _rec(t, a, c + 1, i + 1);
			}
		}
	}
}

bool p[20];
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &v[i][j]);
	_rec(p, 0, 0, 0);
	printf("%d", m);
	return 0;
}