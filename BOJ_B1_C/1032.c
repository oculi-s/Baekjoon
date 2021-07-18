#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i, j, l = 0, t;
	char s[52][52];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%s", s[i]);
	while (s[0][l++]) {};
	for (j = 0; j < l - 1; j++) {
		t = 1;
		for (i = 0; i < n - 1; i++) {
			if (s[i][j] != s[i + 1][j]) {
				t = 0;
				break;
			}
		}
		s[51][j] = (t == 1 ? s[0][j] : '?');
	}
	s[51][l - 1] = NULL;
	printf("%s", s[51]);
	return 0;
}