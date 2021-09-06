#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char n[21];
	int l;
}node;

int _c(node* a, node* b) {
	return (*b).l - (*a).l;
}

node s[100];
int t, n, i;
int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i = 0; i < n; i++)
			scanf("%s %d", s[i].n, &s[i].l);
		qsort(s, n, sizeof(node), _c);
		printf("%s\n", s[0].n);
	}
	return 0;
}