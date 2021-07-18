#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;
	scanf_s("%d", &a);
	printf("%s", a > 89 ? "A" : a > 79 ? "B" : a > 69 ? "C" : a > 59 ? "D" : "F");
}