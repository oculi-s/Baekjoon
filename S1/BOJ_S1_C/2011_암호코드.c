#include <stdio.h>
#include <string.h>
#define D 1000000

int a[2][5000], i, n;
char s[5001];
int main() {
	scanf("%s", s);
	a[0][0] = 1;
	n = strlen(s);
	if (s[0] == '0') {
		printf("0");
	}
	else {
		for (i = 1; i < n; i++) {
			if (s[i] != '0')
				a[0][i] = (a[0][i - 1] + a[1][i - 1]) % D;
			if ((s[i - 1] - '0') * 10 + (s[i] - '0') <= 26)
				a[1][i] = a[0][i - 1] % D;
		}
		printf("%d", (a[0][n - 1] + a[1][n - 1]) % D);
	}
	return 0;
}
