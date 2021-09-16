#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[11], b[11];
int n, i, c, x[26], m, v;

int sim(char a[11], char b[11]) {
	int y[26], i, s = 0, n = strlen(b);
	if (abs(m - n) > 1)
		return 0;
	else {
		for (i = 0; i < 26; i++)
			y[i] = 0;
		for (i = 0; i < strlen(b); i++)
			y[b[i] - 'A']++;
		for (i = 0; i < 26; i++) {
			v = abs(x[i] - y[i]);
			if (v > 1)
				return 0;
			s += v;
		}
		return s <= 2;
	}
}

int main() {
	scanf("%d\n%s", &n, a), n--;
	m = strlen(a);
	for (i = 0; i < m; i++)
		x[a[i] - 'A']++;
	while (n--)
		scanf("%s", b), c += sim(a, b);
	printf("%d", c);
	return 0;
}