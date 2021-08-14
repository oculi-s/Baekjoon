#include <stdio.h>
#include <string.h>

int main() {
	int u, n, v, p[10001], i, m = 10000;
	scanf("%d %d", &u, &n);
	char s[11], a[10001][11];
	for (i = 0; i < u; i++)
		p[i] = 0, strcpy(a[i], "");
	while (n--) {
		scanf("%s %d", s, &v);
		v--, p[v]++;
		if (!a[v][0])
			strcpy(a[v], s);
	}
	for (i = 0; i < u; i++)
		if (p[i])
			m = m < p[i] ? m : p[i];
	for (i = 0; i < u; i++)
		if (p[i] == m) {
			printf("%s %d", a[i], i + 1);
			break;
		}
	return 0;
}