#include <stdio.h>
#include <stdlib.h>

int main() {
	char s[100];
	scanf("%s", s);
	char a[26];
	for (int i = 0; i < 26; i++) {
		a[i] = -1;
	}
	int j = -1;
	while (s[++j]) {
		if (a[s[j]-97] == -1) {
			a[s[j]-97] = j;
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ",a[i]);
	}
	return 0;
}