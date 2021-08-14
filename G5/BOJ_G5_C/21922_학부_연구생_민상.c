#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void _left(int**, bool**, bool***, int, int, int, int);
void _right(int**, bool**, bool***, int, int, int, int);
void _up(int**, bool**, bool***, int, int, int, int);
void _down(int**, bool**, bool***, int, int, int, int);

void _left(int** P, bool** A, bool*** V, int i, int j, int m, int n) {
	int y = i, x = j - 1;
	while (x >= 0) {
		A[y][x] = 1;
		if (P[y][x] == 3) {
			if (!V[1][y][x])
				_down(P, A, V, y, x, m, n), V[1][y][x] = 1;
			break;
		}
		else if (P[y][x] == 4) {
			if (!V[3][y][x])
				_up(P, A, V, y, x, m, n), V[3][y][x] = 1;
			break;
		}
		else if (P[y][x] == 1)
			break;
		x--;
	}
}
void _right(int** P, bool** A, bool*** V, int i, int j, int m, int n) {
	int y = i, x = j + 1;
	while (x < m) {
		A[y][x] = 1;
		if (P[y][x] == 3) {
			if (!V[0][y][x])
				_up(P, A, V, y, x, m, n), V[0][y][x] = 1;
			break;
		}
		else if (P[y][x] == 4) {
			if (!V[1][y][x])
				_down(P, A, V, y, x, m, n), V[1][y][x] = 1;
			break;
		}
		else if (P[y][x] == 1)
			break;
		x++;
	}
}
void _up(int** P, bool** A, bool*** V, int i, int j, int m, int n) {
	int y = i - 1, x = j;
	while (y >= 0) {
		A[y][x] = 1;
		if (P[y][x] == 3) {
			if (!V[1][y][x])
				_right(P, A, V, y, x, m, n), V[1][y][x] = 1;
			break;
		}
		else if (P[y][x] == 4) {
			if (!V[2][y][x])
				_left(P, A, V, y, x, m, n), V[2][y][x] = 1;
			break;
		}
		else if (P[y][x] == 2)
			break;
		y--;
	}
}
void _down(int** P, bool** A, bool*** V, int i, int j, int m, int n) {
	int y = i + 1, x = j;
	while (y < n) {
		A[y][x] = 1;
		if (P[y][x] == 3) {
			if (!V[0][y][x])
				_left(P, A, V, y, x, m, n), V[0][y][x] = 1;
			break;
		}
		else if (P[y][x] == 4) {
			if (!V[3][y][x])
				_right(P, A, V, y, x, m, n), V[3][y][x] = 1;
			break;
		}
		else if (P[y][x] == 2)
			break;
		y++;
	}
}

int main() {
	int n, m, i, j, c = 0;
	scanf("%d %d", &n, &m);
	bool** A = malloc(sizeof(bool*) * n);
	bool*** V = malloc(sizeof(bool**) * 4);
	int** P = malloc(sizeof(int*) * n);
	for (i = 0; i < 4; i++)
		V[i] = malloc(sizeof(bool*) * n);

	for (i = 0; i < n; i++) {
		A[i] = malloc(sizeof(bool) * m);
		P[i] = malloc(sizeof(int) * m);
		V[0][i] = malloc(sizeof(bool) * m);
		V[1][i] = malloc(sizeof(bool) * m);
		V[2][i] = malloc(sizeof(bool) * m);
		V[3][i] = malloc(sizeof(bool) * m);
		for (j = 0; j < m; j++) {
			scanf("%d", &(P[i][j])), A[i][j] = 0;
			V[0][i][j] = 0, V[1][i][j] = 0, V[2][i][j] = 0, V[3][i][j] = 0;
		}
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (P[i][j] == 9) {
				A[i][j] = 1;
				_left(P, A, V, i, j, m, n);
				_right(P, A, V, i, j, m, n);
				_up(P, A, V, i, j, m, n);
				_down(P, A, V, i, j, m, n);
			}

	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (A[i][j])
				c++;
	printf("%d", c);
	return 0;
}