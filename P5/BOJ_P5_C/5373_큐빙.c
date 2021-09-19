#include <stdio.h>
typedef struct {
	char u[3][4], d[3][4], f[3][4], b[3][4], l[3][4], r[3][4];
} str;

str cube;
int t, n, i;
char c[3];

void init() {
	int i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++) {
			cube.u[i][j] = 'w';
			cube.d[i][j] = 'y';
			cube.f[i][j] = 'r';
			cube.b[i][j] = 'o';
			cube.l[i][j] = 'g';
			cube.r[i][j] = 'b';
		}
}

void rotate() {
	int i, j, t, a[3][3];
	if (c[1] == '+') {
		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++)
				a[i][j] = cube.u[2 - j][i];
		for (i = 0; i < 3; i++) {
			t = cube.f[0][i];
			cube.f[0][i] = cube.r[2 - i][0];
			cube.r[2 - i][0] = cube.b[2][2 - i];
			cube.b[2][2 - i] = cube.l[i][2];
			cube.l[i][2] = t;
		}
	}
	else {
		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++)
				a[i][j] = cube.u[j][2 - i];
		for (i = 0; i < 3; i++) {
			t = cube.f[0][i];
			cube.f[0][i] = cube.l[i][2];
			cube.l[i][2] = cube.b[2][2 - i];
			cube.b[2][2 - i] = cube.r[2 - i][0];
			cube.r[2 - i][0] = t;
		}
	}
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			cube.u[i][j] = a[i][j];
}

void rr(int n) {
	int i, j, t, a[3][3], b[3][3];
	while (n--) {
		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++) {
				t = cube.u[i][j];
				cube.u[i][j] = cube.l[i][j];
				cube.l[i][j] = cube.d[i][j];
				cube.d[i][j] = cube.r[i][j];
				cube.r[i][j] = t;
			}
		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++) {
				a[i][j] = cube.f[2 - j][i];
				b[i][j] = cube.b[j][2 - i];
			}
		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++) {
				cube.f[i][j] = a[i][j];
				cube.b[i][j] = b[i][j];
			}
	}
}

void rf(int n) {
	int i, j, t, a[3][3], b[3][3];
	while (n--) {
		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++) {
				t = cube.u[i][j];
				cube.u[i][j] = cube.b[i][j];
				cube.b[i][j] = cube.d[2 - i][2 - j];
				cube.d[2 - i][2 - j] = cube.f[i][j];
				cube.f[i][j] = t;
			}
		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++) {
				a[i][j] = cube.l[2 - j][i];
				b[i][j] = cube.r[j][2 - i];
			}
		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++) {
				cube.l[i][j] = a[i][j];
				cube.r[i][j] = b[i][j];
			}
	}
}

void change() {
	switch (c[0]) {
	case 'F':
		rf(3), rotate(), rf(1);
		break;
	case 'B':
		rf(1), rotate(), rf(3);
		break;
	case 'L':
		rr(1), rotate(), rr(3);
		break;
	case 'R':
		rr(3), rotate(), rr(1);
		break;
	case 'U':
		rotate();
		break;
	case 'D':
		rr(2), rotate(), rr(2);
		break;
	default:
		break;
	}
}

int main() {
	init();
	scanf("%d", &t);
	while (t--) {
		init();
		scanf("%d", &n);
		while (n--) {
			scanf("%s", c);
			change();
		}
		for (i = 0; i < 3; i++)
			printf("%s\n", cube.u[i]);
	}
	return 0;
}