#include <stdio.h>

int main() {
	char s[26], c[21];
	int i, l, m, n, a = 1, b;
	scanf("%s", s);
	while (!(s[0] == '#' && s[1] == 0)) {
		scanf("%s", c);
		printf("Problem %d\n", a);
		while (!(c[0] == '0' && c[1] == 0)) {
			i = 0, b = 1;
			while (c[i++]);
			i--, l = 0;
			while (c[l] >= '0' && c[l] <= '9') {
				m = (c[l] - 48), n = c[l + 1] - 48;
				if (c[l + 1] && (m * 10 + n < 26))
					if ((i % 2 && s[m] < s[m * 10 + n] && b == 1) || i % 2 == 0)
						m = m * 10 + n, b = 0;
				if (10 <= m && m < 26)
					printf("%c", s[m]), l += 2;
				else
					printf("%c", s[c[l] - 48]), l++;
			};
			printf("\n"), scanf("%s", c);
		}
		printf("\n"), scanf("%s", s), a++;
	}
	return 0;
}