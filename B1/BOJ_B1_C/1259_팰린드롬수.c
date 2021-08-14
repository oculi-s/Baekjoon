#include <stdio.h>
#include <string.h>

int main() {
	char s[6], n, m;
	scanf("%s", s);
	while (s[0] != '0') {
		n = strlen(s) - 1, m = 0;
		while (m <= n && s[n] == s[m])
			m++, n--;
		printf("%s\n", m > n ? "yes" : "no");
		scanf("%s", s);
	}
	return 0;
}