#include <stdio.h>
#include <stdlib.h>

char x[16], t[16];
int l, c, i;

int* _c(char* a, char* b) {
	return *a - *b;
}

int _m(char a) {
	if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
		return 1;
	return 0;
}

void _rec(char* t, int e, int n, int a) {
	int i;
	if (n == l) {
		if (1 <= a && a <= l - 2)
			printf("%s\n", t);
	}
	else {
		for (i = e; i < c; i++) {
			t[n] = x[i];
			_rec(t, i + 1, n + 1, a + _m(x[i]));
		}
	}
}

int main() {
	scanf("%d %d\n", &l, &c);
	for (i = 0; i < c - 1; i++)
		scanf("%c ", x + i);
	scanf("%c", x + c - 1);
	qsort(x, c, sizeof(char), _c);
	t[l] = 0;
	_rec(t, 0, 0, 0);
	return 0;
}