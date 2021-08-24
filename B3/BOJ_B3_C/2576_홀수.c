#include <stdio.h>

int i, a, s, m = 101;
int main() {
	for (i = 0; i < 7; i++) {
		scanf("%d", &a);
		if (a % 2)
			s += a, m = m < a ? m : a;
	}
	if (s)
		printf("%d\n%d", s, m);
	else
		printf("-1");
	return 0;
}