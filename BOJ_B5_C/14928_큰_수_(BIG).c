#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 2000000
char b[8] = "20000303";

void _diff(char* a, char* b) {
	int u = 0, t, n = 8;
	if (a[0])
		while (n)
			t = -u, n--, t += a[n] - b[n], a[n] = (t + 10) % 10 + 48, u = t < 0;
	*(a - 1) -= u;
}

int _int(char* a, int m) {
	int i = 0, t = 0;
	while (i < m)
		t = (t + a[i] - 48) * 10, i++;
	return t / 10;
}

int main() {
	char* a = malloc(sizeof(char) * M), t;
	int m = 0;
	scanf("%s", a), m = strlen(a);
	while (m > 8) {
		_diff(a + 1, b);
		while (a[0] == '0' && m > 8)
			m--, a++;
	}
	while (_int(a, m) >= 20000303)
		_diff(a, b);
	while (a[0] == '0') { a++; }
	printf("%s", a[0] ? a : "0");
}