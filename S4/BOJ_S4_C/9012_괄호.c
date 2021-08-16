#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i, j, t;
	scanf("%d", &n);
	char s[50];
	for (i = 0; i < n; i++) {
		scanf("%s", s);
		j = 0;
		t = 0;
		while (s[j]) {
			t += s[j++] == '(' ? 1 : -1;
			if (t < 0)
				break;
		}
		printf("%s\n", t == 0 ? "YES" : "NO");
	}
	return 0;
}