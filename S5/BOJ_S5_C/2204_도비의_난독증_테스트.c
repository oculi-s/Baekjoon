#include <stdio.h>

int main() {
	int n, i, j, k, l;
	char s[25], t[25], a[25], b[25];
	scanf("%d", &n);
	while (n) {
		for (i = 0; i < 25; i++)
			b[i] = '{';
		for (i = 0; i < n; i++) {
			scanf("%s", s), l = 0;
			while (s[l])
				t[l] = s[l] + (s[l] < 97 ? 32 : 0), l++;
			for (j = 0; j < l; j++)
				if (a[j] == 0 || b[j] != t[j])
					break;
			if (j == l) {
				for (k = 0; k < l; k++)
					a[k] = s[k], b[k] = t[k];
				a[k] = 0;
			}
			else
				for (j = 0; j < l; j++)
					if (a[j] == 0)
						break;
					else if (t[j] < b[j]) {
						for (k = 0; k < l; k++)
							a[k] = s[k], b[k] = t[k];
						a[k] = 0;
					}
					else if (t[j] > b[j])
						break;
		}
		printf("%s\n", a);
		scanf("%d", &n);
	}
	return 0;
}