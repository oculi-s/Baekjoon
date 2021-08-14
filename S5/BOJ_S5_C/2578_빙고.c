#include <stdio.h>
#include <stdbool.h>

int x[26], y[26];
bool m[5][5];

int _b() {
	int t = 0, i, a = 0, b = 0;
	for (i = 0; i < 5; i++) {
		if (m[i][0] * m[i][1] * m[i][2] * m[i][3] * m[i][4])
			t++;
		if (m[0][i] * m[1][i] * m[2][i] * m[3][i] * m[4][i])
			t++;
		a += m[i][i], b += m[4 - i][i];
	}
	return t + (a == 5) + (b == 5);
}

int main() {
	int i, j, t;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &t), y[t] = i, x[t] = j;
	for (i = 1; i <= 25; i++) {
		scanf("%d", &t), m[y[t]][x[t]] = 1;
		if (_b() >= 3)
			break;
	}
	printf("%d", i);
	return 0;
}