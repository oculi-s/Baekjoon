#include <stdio.h>

int main() {
	int t = 0, a, c;
	char s;
	while (scanf("%c", &s) != EOF)
		if (s > '0' && s <= '9')
			t += s - 48;
	c = t >= 10;
	while (t >= 10) {
		a = t % 10, t /= 10;
		while (t)
			a += t % 10, t /= 10;
		t = a, c++;
	}
	printf("%d\n%s", c, t % 3 ? "NO" : "YES");
	return 0;
}