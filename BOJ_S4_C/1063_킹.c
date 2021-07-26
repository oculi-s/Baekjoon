#include <stdio.h>

void _move(char* a, char* c) {
	if (c[0] == 'B' && a[1] > '1')
		a[1]--;
	else if (c[0] == 'T' && a[1] < '8')
		a[1]++;
	else if (c[0] == 'L' && a[0] > 'A') {
		if (c[1] == 'T' && a[1] < '8')
			a[0]--, a[1]++;
		else if (c[1] == 'B' && a[1] > '1')
			a[0]--, a[1]--;
		else if (c[1] != 'T' && c[1] != 'B')
			a[0]--;
	}
	else if (c[0] == 'R' && a[0] < 'H') {
		if (c[1] == 'T' && a[1] < '8')
			a[0]++, a[1]++;
		else if (c[1] == 'B' && a[1] > '1')
			a[0]++, a[1]--;
		else if (c[1] != 'T' && c[1] != 'B')
			a[0]++;
	}
}

int main() {
	char a[3], b[3], c[3];
	int n, i, x, y, p, q;
	scanf("%s %s %d", a, b, &n);
	for (i = 0; i < n; i++) {
		scanf("%s", c);
		x = a[0], y = a[1];
		p = b[0], q = b[1];
		_move(a, c);
		if (b[0] == a[0] && b[1] == a[1]) {
			_move(b, c);
			if (b[0] == p && b[1] == q)
				a[0] = x, a[1] = y;
		}
	}
	printf("%s\n%s", a, b);
	return 0;
}