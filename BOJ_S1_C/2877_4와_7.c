#include <stdio.h>

int main() {
	int n, i = 2, t = 0, c = 1;
	char s[30];
	scanf("%d", &n);
	while (t + i < n)
		t += i, i *= 2, c++;
	n -= t + 1, s[c] = 0;
	while (c--)
		s[c] = n % 2 ? '7' : '4', n /= 2;
	printf("%s", s);
	return 0;
}