#include <stdio.h>

char s[405][405];
int main() {
	int i, j, t, r, c, a;
	scanf("%d", &t);
	while (t--) {
		a = 0;
		scanf("%d %d", &r, &c);
		for (i = 0; i < r; i++)
			scanf("%s", s[i + 1] + 1);
		for (i = 1; i <= r; i++)
			for (j = 1; j <= c; j++)
				if (s[i][j] == 'o')
					if (s[i][j - 1] == '>' && s[i][j + 1] == '<')
						a++;
					else if (s[i - 1][j] == 'v' && s[i + 1][j] == '^')
						a++;
		printf("%d\n", a);
	}
	return 0;
}