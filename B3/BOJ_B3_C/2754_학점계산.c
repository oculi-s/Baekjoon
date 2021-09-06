#include <stdio.h>

float v;
char s[3];
int main() {
	scanf("%s", s);
	v += (s[0] <= 'D') + (s[0] <= 'C') + (s[0] <= 'B') + (s[0] <= 'A');
	v += s[1] == '+' ? 0.3 : s[1] == '-' ? -0.3 : 0;
	printf("%.1f", v);
	return 0;
}