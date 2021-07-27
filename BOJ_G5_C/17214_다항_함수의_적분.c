#include <stdio.h>
#include <stdlib.h>

int _n(char* s) {
	if (s[0] == '1' && s[1] == 0)
		return 1;
	else if ((s[0] == '-' || s[0] == '+') && s[1] == '1' && s[2] == 0)
		return 2;
	else
		return 0;
}

int main() {
	char* s = malloc(sizeof(char) * 20);
	scanf("%s", s);
	int i = 0, a, j;
	while (s[i] != 'x' && s[i] != 0)
		i++;
	if (s[0] == '-')
		printf("-"), s++, i--;
	if (s[0] == '0')
		printf("W");
	else if (s[i] == 0)
		printf("%sx+W", s + _n(s));
	else {
		a = 0;
		for (j = 0; j < i; j++)
			a = (a + s[j] - 48) * 10;
		a /= 20, s += i + 1;
		if (a != 1 && a != -1)
			printf("%d", a);
		if (s[0] != '+' && s[0] != '-')
			printf("xx+W");
		else {
			printf("xx");
			if (_n(s) == 2)
				printf("%c", s[0]);
			printf("%sx+W", s + _n(s));
		}
	}
	return 0;
}