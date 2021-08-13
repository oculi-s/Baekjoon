#include <stdio.h>
#include <stdlib.h>

typedef struct cd {
	char c;
	char n;
} cd;

cd c[5];
char d[10];

char* _c(cd* a, cd* b) {
	return (*a).n - (*b).n;
}

char _m(char m) {
	char i;
	for (i = 9; i; i--)
		if (d[i] == m) {
			d[i] = 0;
			return i;
		}
}

int main() {
	int i, a, b, m = 0, n = 0, v;
	for (i = 0; i < 5; i++)
		scanf("%c %d\n", &c[i].c, &c[i].n), d[c[i].n]++;
	qsort(c, 5, sizeof(cd), _c);
	a = (c[0].n + 1 == c[1].n) && (c[1].n + 1 == c[2].n) && (c[2].n + 1 == c[3].n) && (c[3].n + 1 == c[4].n);
	b = (c[0].c == c[1].c) && (c[1].c == c[2].c) && (c[2].c == c[3].c) && (c[3].c == c[4].c);
	for (i = 0; i < 10; i++)
		m = m > d[i] ? m : d[i], n += d[i] == 2;

	v = 0;
	if (a && b)
		v = 900 + c[4].n;
	else if (m == 4)
		v = 800 + _m(4);
	else if (m == 3 && n)
		v = 700 + _m(3) * 10 + _m(2);
	else if (b)
		v = 600 + c[4].n;
	else if (a)
		v = 500 + c[4].n;
	else if (m == 3)
		v = 400 + _m(3);
	else if (n == 2)
		v = 300 + _m(2) * 10 + _m(2);
	else if (m == 2)
		v = 200 + _m(2);
	else
		v = 100 + c[4].n;
	printf("%d", v);
	return 0;
}