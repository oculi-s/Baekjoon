#include <stdio.h>
#include <stdlib.h>

typedef long long ll;
ll x[100010];
int n, i, e;

typedef struct {
	ll v;
	int c;
}node;
node s[100010];

int _c(ll* a, ll* b) {
	if (*a > *b)
		return 1;
	else if (*a < *b)
		return -1;
	else
		return 0;
}

int _cc(node* a, node* b) {
	return (*a).c == (*b).c ? _c(&(*a).v, &(*b).v) : (*b).c - (*a).c;
}

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%lld", x + i);
	qsort(x, n, sizeof(ll), _c);
	s[e].v = x[0], s[e].c = 1, e++;
	for (i = 1; i < n; i++)
		if (x[i - 1] == x[i])
			s[e - 1].c++;
		else
			s[e].v = x[i], s[e].c = 1, e++;
	qsort(s, e, sizeof(node), _cc);
	printf("%lld", s[0].v);
	return 0;
}