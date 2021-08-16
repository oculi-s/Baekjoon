#include <stdio.h>
#include <stdlib.h>

int main() {
	int t, h, d;
	scanf("%d", &h);
	for (int i = 0; i < 7; i++) {
		scanf("%d", &t);
		if (t == h + 1)
			d = 1;
		else if (t == h - 1)
			d = -1;
		else {
			d = 0;
			break;
		}
		h = t;
	}
	printf("%s", d == 1 ? "ascending" : d == -1 ? "descending" : "mixed");
	return 0;
}