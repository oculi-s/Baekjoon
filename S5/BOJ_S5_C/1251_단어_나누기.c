#include <stdio.h>
#include <string.h>

void* _r(char* a) {
	char t[51];
	int n = strlen(a), i;
	for (i = 0; i < n; i++)
		t[i] = a[n - i - 1];
	for (i = 0; i < n; i++)
		a[i] = t[i];
}

void* _c(char* t, char* a, char* b, char* c) {
	int n = strlen(a), m = strlen(b);
	strcpy(t, a);
	strcpy(t + n, b);
	strcpy(t + n + m, c);
}

int main() {
	int i, j, n;
	char a[51], b[51], c[51], d[51], e[51], t1, t2;
	scanf("%s", a);
	strcpy(b, a), strcpy(c, a);
	n = strlen(a);
	for (i = 0; i < n; i++)
		e[i] = 'z';
	e[n] = 0;
	for (i = 1; i < n; i++) {
		t1 = b[i], b[i] = 0;
		for (j = i + 1; j < n; j++) {
			t2 = c[j], c[j] = 0, d[0] = 0;
			_r(b), _r(c + i), _r(a + j);
			_c(d, b, c + i, a + j);
			_r(b), _r(c + i), _r(a + j);
			if (strcmp(d, e) < 0)
				strcpy(e, d);
			c[j] = t2;
		}
		b[i] = t1;
	}
	printf("%s", e);
	return 0;
}