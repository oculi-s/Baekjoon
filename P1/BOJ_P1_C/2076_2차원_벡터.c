#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long ld;
typedef struct {
	ld x, y;
	float a;
} node;

node p[30000], v;

int _c(node* a, node* b) {
	if ((*a).a > (*b).a)
		return 1;
	else if ((*a).a < (*b).a)
		return -1;
	else
		return 0;
}

ld _d() {
	return v.x * v.x + v.y * v.y;
}

int n, i, j;
ld m, d;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%lld %lld", &p[i].x, &p[i].y);
		p[i].a = atan2f((float)(p[i].y), (float)(p[i].x));
	}
	qsort(p, n, sizeof(node), _c);
	for (i = 0; i < n; i++) {
		v.x = 0, v.y = 0, d = 0;
		for (j = i; j < i + n; j++) {
			v.x += p[j % n].x, v.y += p[j % n].y;
			if (_d() + 30000 * 30000 < d)
				break;
			d = _d(), m = m > d ? m : d;
		}
	}
	printf("%lld", m);
	return 0;
}