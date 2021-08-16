#include <stdio.h>
#include <stdlib.h>

int main() {
	int d, h, m, a = 0;
	scanf("%d %d %d", &d, &h, &m);
	if (m >= 11)
		a += (m - 11);
	else
		a += 60 + (m - 11), h--;
	if (h >= 11)
		a += (h - 11) * 60;
	else
		a += (24 + (h - 11)) * 60, d--;
	if (d >= 11)
		a += (d - 11) * 24 * 60;
	else
		a = -1;
	
	printf("%d", a);
	return 0;
}