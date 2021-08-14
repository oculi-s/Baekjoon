#include <stdio.h>

int _a(char a[20]) {
	int i = 0, v = 0;
	while (a[i]) {
		if (a[i] == 'M')
			v += 1000;
		else if (a[i] == 'D')
			v += 500;
		else if (a[i] == 'L')
			v += 50;
		else if (a[i] == 'V')
			v += 5;
		else if (a[i] == 'C') {
			if (a[i + 1] == 'M')
				v += 900, i++;
			else if (a[i + 1] == 'D')
				v += 400, i++;
			else
				v += 100;
		}
		else if (a[i] == 'X') {
			if (a[i + 1] == 'C')
				v += 90, i++;
			else if (a[i + 1] == 'L')
				v += 40, i++;
			else
				v += 10;
		}
		else if (a[i] == 'I') {
			if (a[i + 1] == 'X')
				v += 9, i++;
			else if (a[i + 1] == 'V')
				v += 4, i++;
			else
				v += 1;
		}
		i++;
	}
	return v;
}

int _r(int v) {
	char a[20];
	int i;
	for (i = 0; i < v / 1000; i++)
		printf("M");
	v %= 1000;
	for (i = 0; i < v / 900; i++)
		printf("CM");
	v %= 900;
	for (i = 0; i < v / 500; i++)
		printf("D");
	v %= 500;
	for (i = 0; i < v / 400; i++)
		printf("CD");
	v %= 400;
	for (i = 0; i < v / 100; i++)
		printf("C");
	v %= 100;
	for (i = 0; i < v / 90; i++)
		printf("XC");
	v %= 90;
	for (i = 0; i < v / 50; i++)
		printf("L");
	v %= 50;
	for (i = 0; i < v / 40; i++)
		printf("XL");
	v %= 40;
	for (i = 0; i < v / 10; i++)
		printf("X");
	v %= 10;
	for (i = 0; i < v / 9; i++)
		printf("IX");
	v %= 9;
	for (i = 0; i < v / 5; i++)
		printf("V");
	v %= 5;
	for (i = 0; i < v / 4; i++)
		printf("IV");
	v %= 4;
	for (i = 0; i < v; i++)
		printf("I");
	return a;
}

int main() {
	char a[20], b[20];
	scanf("%s\n%s", a, b);
	int c = _a(a) + _a(b);
	printf("%d\n", c), _r(c);
}