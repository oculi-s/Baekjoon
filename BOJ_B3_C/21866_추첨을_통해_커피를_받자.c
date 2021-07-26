#include <stdio.h>

int main() {
	int t, i, s = 0;
	int o[9] = { 100, 100, 200, 200, 300, 300, 400, 400, 500 };
	for (i = 0; i < 9; i++) {
		scanf("%d", &t), s += t;
		if (o[i] < t)
			break;
	}
	printf("%s", i < 9 ? "hacker" : s >= 100 ? "draw" : "none");
	return 0;
}