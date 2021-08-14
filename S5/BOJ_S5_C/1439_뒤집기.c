#include <stdio.h>

int main() {
	char t, h = 0;
	int c[2] = { 0,0 };
	while (scanf("%c", &t) != EOF) {
		if (t == '0' && (h == 0 || h == '1'))
			c[0] ++;
		else if (t == '1' && (h == 0 || h == '0'))
			c[1] ++;
		h = t;
	}
	printf("%d", c[0] < c[1] ? c[0] : c[1]);
	return 0;
}