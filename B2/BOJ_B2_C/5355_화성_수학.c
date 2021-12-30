#include <stdio.h>

int n;
float a;
char c;
int main() {
	scanf("%d", &n);
	while (n--) {
		scanf("%f", &a);
		c = "";
		while (c != '\n') {
			scanf("%c", &c);
			if (c == '@')
				a *= 3;
			else if (c == '%')
				a += 5;
			else if (c == '#')
				a -= 7;
		}
		printf("%.2f\n", a);
	}
	return 0;
}