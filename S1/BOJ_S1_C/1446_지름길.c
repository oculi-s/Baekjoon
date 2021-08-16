#include <stdio.h>
#include <stdlib.h>

int _min(a, b) {
	return a < b ? a : b;
}

int main() {
	int n, d, i, j, s[12], e[12], t[12];
	scanf("%d %d", &n, &d);
	for (i = 0; i < n; i++) {
		scanf("%d %d %d", s + i, e + i, t + i);
		for (j = 0; j < i; j++)
			if (s[i] == s[j] && e[i] == e[j])
				t[j] = _min(t[i], t[j]), s[i] = d+1, e[i] = d+1;
	}
	int v[10000];
	v[0] = 0, v[1] = 1;
	for (i = 2; i <= d; i++) {
		v[i] = v[i - 1] + 1;
		for (j = 0; j < n; j++)
			if (i == e[j])
				v[i] = _min(v[i], v[s[j]] + t[j]);
	}
	printf("%d", v[d]);
	return 0;
}