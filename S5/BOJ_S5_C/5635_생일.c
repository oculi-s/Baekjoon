#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int y, m, d;
	char n[16];
} node;

int _c(node* a, node* b) {
	return (*a).y != (*b).y ? (*a).y - (*b).y : (*a).m != (*b).m ? (*a).m - (*b).m : (*a).d - (*b).d;
}

node s[100];
int i, n;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%s %d %d %d", s[i].n, &s[i].d, &s[i].m, &s[i].y);
	qsort(s, n, sizeof(node), _c);
	printf("%s\n%s", s[n - 1].n, s[0].n);
	return 0;
}