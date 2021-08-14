#include <stdio.h>
#include <stdlib.h>

typedef struct us {
	int a;
	int b;
	char n[101];
} us;

us p[100000];
int _c(us* a, us* b) {
	return (*a).a == (*b).a ? (*a).b - (*b).b : (*a).a - (*b).a;
}

int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d %s", &p[i].a, &p[i].n), p[i].b = i;
	qsort(p, n, sizeof(us), _c);
	for (i = 0; i < n; i++)
		printf("%d %s\n", p[i].a, p[i].n);
	return 0;
}