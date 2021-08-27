#include <stdio.h>

int x[1100000][2], n;
int c[4] = { 0,1,3,2 };
int d[4] = { 0,2,3,1 };

void _hanoi(int a, int e) {
	int i, t;
	if (a == n) {
		printf("%d\n", e);
		for (i = 0; i < e; i++)
			printf("%d %d\n", x[i][0], x[i][1]);
	}
	else {
		for (i = 0; i < e; i++)
			x[i][0] = c[x[i][0]], x[i][1] = c[x[i][1]];
		t = e, x[e][0] = 1, x[e][1] = 3, e++;
		for (i = 0; i < t; i++)
			x[e][0] = d[x[i][0]], x[e][1] = d[x[i][1]], e++;
		_hanoi(a + 1, e);
	}
}

int main() {
	scanf("%d", &n);
	_hanoi(0, 0);
	return 0;
}