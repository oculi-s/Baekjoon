#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char s[11];
	short a, b, c;
}node;

int* _c(node *a, node *b) {
	if ((*a).a != (*b).a)
		return (*b).a - (*a).a;
	else if ((*a).b != (*b).b)
		return (*a).b - (*b).b;
	else if ((*a).c != (*b).c)
		return (*b).c - (*a).c;
	else
		return strcmp((*a).s, (*b).s);
}

int n, i;
node s[100000];
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%s %hd %hd %hd", s[i].s, &s[i].a, &s[i].b, &s[i].c);
	qsort(s, n, sizeof(node), _c);
	for (i = 0; i < n; i++)
		printf("%s\n", s[i].s);
	return 0;
}