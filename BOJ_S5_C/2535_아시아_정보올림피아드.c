#include <stdio.h>
#include <stdlib.h>

typedef struct s {
	short c;
	short n;
	short v;
} s;

s a[100];

short* _c(s* a, s* b) {
	return (*b).v - (*a).v;
}

int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d %d %d", &(a[i].c), &(a[i].n), &(a[i].v));
	qsort(a, n, sizeof(s), _c);
	printf("%d %d\n", a[0].c, a[0].n);
	printf("%d %d\n", a[1].c, a[1].n);
	i = 2;
	while (a[i].c == a[0].c && a[i].c == a[1].c)
		i++;
	printf("%d %d", a[i].c, a[i].n);
	return 0;
}