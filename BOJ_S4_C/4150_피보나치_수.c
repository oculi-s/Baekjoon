#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 1200

void _sum(char* a, char* b, char* c) {
	int n = strlen(a), m = strlen(b);
	int t, N = 1 + (n > m ? n : m), u = 0;
	c[N] = 0;
	while (N--) {
		t = u;
		if (n)
			t += a[--n] - 48;
		if (m)
			t += b[--m] - 48;
		c[N] = t % 10 + 48, u = t > 9;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	char* a = malloc(sizeof(char) * M);
	char* b = malloc(sizeof(char) * M);
	char* c = malloc(sizeof(char) * M);
	a[0] = '0', a[1] = 0, b[0] = '1', b[1] = 0;
	while (n--) {
		_sum(a, b, c);
		while (c[0] == '0') { c++; }
		strcpy(b, a), strcpy(a, c);
	}
	printf("%s", a);
	return 0;
}