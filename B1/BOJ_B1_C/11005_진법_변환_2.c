#include <stdio.h>

int n, a, b, s[50];
int main() {
	scanf("%d %d", &n, &b);
	while (n) {
		s[a] = n % b, n /= b;
		s[a] += s[a] > 9 ? 55 : 48;
		a++;
	}
	while (a--)
		printf("%c", s[a]);
	return 0;
}