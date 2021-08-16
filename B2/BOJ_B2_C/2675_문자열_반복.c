#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, l, m;
	char s[20];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &l, s);
		m = -1;
		while (s[++m]) {
			for (int k = 0; k < l; k++) {
				printf("%c", s[m]);
			}
		};
		s[0] = NULL;
		printf("\n");
	}
	return 0;
}