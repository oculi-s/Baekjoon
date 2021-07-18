#include <stdio.h>

int main()
{
	int a = 1, b = 1, c = 2, d = 2, e = 2, f = 8;
	int p, q, r, s, t, u;
	scanf("%d %d %d %d %d %d", &p, &q, &r, &s, &t, &u);
	printf("%d %d %d %d %d %d", a - p, b - q, c - r, d - s, e - t, f - u);
	return 0;
}