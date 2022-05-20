#include <stdio.h>

int n, i, j, c[26];
char a[10000];
int pan() {
	int p = 3;
	for (j = 0; j < 26; j++)
		p = p < c[j] ? p : c[j], c[j] = 0;
	return p;
}

char p[4][100] = { "Not a pangram","Pangram!","Double pangram!!", "Triple pangram!!!" };
int main() {
	scanf("%d\n", &n);
	for (i = 1; i <= n; i++) {
		gets(a);
		for (j = 0; a[j]; j++) {
			if (a[j] >= 'a' && a[j] <= 'z')
				c[a[j] - 'a']++;
			else if (a[j] >= 'A' && a[j] <= 'Z')
				c[a[j] - 'A']++;
		}
		printf("Case %d: %s\n", i, p[pan(c)]);
	}
	return 0;
}
