#include <stdio.h>
#include <stdlib.h>

int main() {
	char* s = malloc(sizeof(char) * 102);
	scanf("%s", s);

	int n = -1, c = 0;
	while (s[++n]) {
		switch (s[n]) {
		case 'c':
			n += (int)(s[n + 1] == '=' || s[n + 1] == '-');
			break;
		case 'd':
			n += 2 * (int)(s[n + 1] == 'z' && s[n + 2] == '=') + (int)(s[n + 1] == '-');
			break;
		case 'l':
			n += (int)(s[n + 1] == 'j');
			break;
		case 'n':
			n += (int)(s[n + 1] == 'j');
			break;
		case 's':
			n += (int)(s[n + 1] == '=');
			break;
		case 'z':
			n += (int)(s[n + 1] == '=');
			break;
		default:
			break;
		}
		c++;
	}
	printf("%d", c);
	return 0;
}