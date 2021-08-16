#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	char* s = malloc(sizeof(char) * 100);
	int* c = malloc(sizeof(int) * 26);
	scanf("%d", &n);

	int m, t = n;
	for (int i = 0; i < n; i++) {
		for (int i = 0; i < 26; i++) {
			c[i] = 0;
		}
		scanf("%s", s);
		m = 0;
		s[0] -= 97;
		while (s[++m]) {
			s[m] -= 97;
			c[s[m - 1]] = s[m] == s[m - 1] ? 1: -1;
			if (c[s[m]] == -1) {
				t--;
				break;
			}
			c[s[m]] = 1;
		}
	}
	printf("%d", t);
	return 0;
}