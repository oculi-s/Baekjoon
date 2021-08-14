#include <stdio.h>
#include <stdbool.h>

int main() {
	int n, l, i;
	scanf("%d", &n);
	char s[200];
	bool a[200];
	while (n--) {
		scanf("%s", s);
		l = 0;
		while (s[l++]);
		l--;
		for (i = 0; i < l; i++)
			a[i] = s[i] == '1';
		a[l] = 0;
		if (l == 1 || l == 3)
			printf("NO\n");
		else if (l == 2)
			printf("%s\n", !a[0] && a[1] ? "YES" : "NO");
		else {
			i = 0;
			while (i < l - 1) {
				if (!a[i] && a[i + 1])
					i += 2;
				else if (a[i] && !a[i + 1]) {
					i += 2;
					if (i >= l)
						break;
					else {
						while (!a[i])
							if (++i >= l)
								break;
						if (i >= l)
							break;
						while (a[i])
							i++;
					}
				}
				else
					break;
			}
			printf("%s\n", i >= l - 1 ? "YES" : "NO");
		}
	}
	return 0;
}