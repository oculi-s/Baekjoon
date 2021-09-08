#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char s[8], c;
} node;

node p[3000];
char t[8], a;
int k, i, j, n, s, e, c, m[11];

void _s(int i, int j) {
	a = t[i], t[i] = t[j], t[j] = a;
}

int main() {
	scanf("%s %d", p[0].s, &k);
	n = strlen(p[0].s), e++, m[k] = -1;
	while (s < e) {
		strcpy(t, p[s].s), c = p[s].c, s++;
		if (c < k && t[0] > '0')
			for (i = 0; i < n; i++)
				for (j = i + 1; j < n; j++) {
					_s(i, j);
					if (atoi(t) > m[c + 1] && t[0] > '0')
						strcpy(p[e].s, t), p[e].c = c + 1, e++, m[c + 1] = atoi(t);
					_s(i, j);
				}
	}
	printf("%d", m[k]);
	return 0;
}