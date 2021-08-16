#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int left;
	int right;
	char value;
}node;

int main() {
	char s[100010], c[5], d[5];
	int n, i, e = 0;
	scanf("%s\n%d", s, &n);
	while (s[e++]) {}
	e--;
	node* dll = malloc(sizeof(node) * (e + n) * 2);
	for (i = 1; i <= e; i++) {
		dll[i].value = s[i - 1];
		dll[i].left = i - 1;
		dll[i].right = i + 1;
	}
	dll[0].left = 0, dll[0].right = 1, dll[e].right = 0, dll[e].left = e - 1;
	int p = e;
	for (i = 0; i < n; i++) {
		scanf("%s", c);
		if (c[0] == 'L' && p != 0)
			p = dll[p].left;
		else if (c[0] == 'D' && dll[p].right != 0)
			p = dll[p].right;
		else if (c[0] == 'B' && p != 0) {
			dll[dll[p].right].left = dll[p].left;
			dll[dll[p].left].right = dll[p].right;
			p = dll[p].left;
		}
		else if (c[0] == 'P') {
			scanf("%s", d);
			e++;
			dll[e].value = d[0];
			dll[e].left = p;
			dll[e].right = dll[p].right;
			dll[dll[p].right].left = e;
			dll[p].right = e;
			p = e;
		}
	}
	for (p = 1; p < e; p++)
		if (dll[p].left == 0)
			if (dll[dll[p].right].left == p)
				break;
	while (p != 0) {
		printf("%c", dll[p].value);
		p = dll[p].right;
	}
	return 0;
}