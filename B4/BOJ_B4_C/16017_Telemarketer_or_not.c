#include <stdio.h>

int main() {
	char a[5], i;
	for (i = 0; i < 4; i++)
		scanf("%s", a + i);
	if ((a[0] == '8' || a[0] == '9') && (a[1] == a[2]) && (a[3] == '8' || a[3] == '9'))
		printf("ignore");
	else
		printf("answer");
	return 0;
}