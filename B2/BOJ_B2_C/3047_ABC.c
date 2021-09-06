#include <stdio.h>

int x, y, z, a, b, c, d[3];
char s[4];
int main() {
	scanf("%d %d %d\n%s", &x, &y, &z, s);
	c = x > y && x > z ? x : y > z ? y : z;
	a = x < y && x < z ? x : y < z ? y : z;
	b = a == x ? (c == y ? z : y) : a == y ? (c == x ? z : x) : (c == x ? y : x);
	d[0] = a, d[1] = b, d[2] = c;
	for (x = 0; x < 3; x++)
		printf("%d ", d[s[x] - 'A']);
	return 0;
}