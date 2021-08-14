#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define M 1200

void _diff(char* a, char* b, int n) {
	int u = 0, t;
    if (a[0])
    	while (n)
	    	t = -u, n--, t += a[n] - b[n], a[n] = (t + 10) % 10 + 48, u = t < 0;
	*(a - 1) -= u;
}

char b[M], d[M] = { 0, };
int main() {
	char* a = malloc(sizeof(char) * M);
	scanf("%s %s", a, b);
	int m = strlen(a), n = strlen(b), e = 1, i;
	while (m > n) {
		_diff(a + 1, b, n), d[e]++;
		while (a[0] == '0' && m > n)
			m--, e++, a++;
	}
	while (strcmp(a, b) >= 0)
		_diff(a, b, n), d[e - 1]++;
	b[e] = 0;
	for (i = e - 1; i > 1; i--)
		b[i] = d[i] % 10 + 48, d[i - 1] += d[i] / 10;
	b[i] = d[i] % 10 + 48, b[i - 1] = d[i] / 10 + 48;
	printf("%s\n", b + (b[0] == '0'));
	while (a[0] == '0') { a++; }
	printf("%s", a[0] ? a : "0");
}