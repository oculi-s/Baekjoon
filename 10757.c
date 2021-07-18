#include <stdio.h>
#include <stdlib.h>

#define M 10010
int main()
{
	char *a = malloc(sizeof(char) * M);
	char *b = malloc(sizeof(char) * M);
	scanf("%s %s", a, b);

	int n = 0, m = 0;
	while (a[++n]);
	while (b[++m]);
	int t, N = n > m ? n : m;
	int *c = malloc(sizeof(int) * N);
	int L = N, u = 0;
	while (N--)
	{
		t = u;
		if (n)
			t += a[--n] - 48;
		if (m)
			t += b[--m] - 48;
		c[N] = t % 10;
		u = t > 9;
	}
	if (u)
		printf("%d", 1);
	while (L--)
		printf("%d", *c++);
	return 0;
}