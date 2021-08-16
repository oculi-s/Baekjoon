#include <stdio.h>
#include <stdlib.h>

int main() {
	char* s = malloc(sizeof(char) * 15);
	scanf("%s", s);

	int m = -1, a = 0;
	while (s[++m]) {
		s[m] -= 65;
		a += 3 + (s[m] < 18 ? s[m] / 3 : s[m] == 18 ? 5 : s[m] < 22 ? 6 : 7);
	}
	printf("%d", a);
	return 0;
}