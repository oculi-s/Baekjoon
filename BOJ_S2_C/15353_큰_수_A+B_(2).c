#include <stdio.h>
#include <stdlib.h>

#define M 10010
int main() {
	char* a = malloc(sizeof(char) * M);
	char* b = malloc(sizeof(char) * M);
	scanf("%s %s", a, b);
	int n = 0, m = 0;
	while (a[++n]);
	while (b[++m]);
	int t, N = n > m ? n : m, u = 0;
	char* c = malloc(sizeof(char) * N);
	while (N--) {
		t = u;
		if (n)
			t += a[--n] - 48;
		if (m)
			t += b[--m] - 48;
		c[N] = t % 10 + 48, u = t > 9;
	}
	if (u)
		printf("%d", 1);
	printf("%s", c);
	return 0;
}