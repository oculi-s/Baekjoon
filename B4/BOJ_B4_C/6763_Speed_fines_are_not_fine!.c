#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, d;
	scanf("%d %d", &a, &b);
	d = b - a;
	if (d <= 0)
		printf("Congratulations, you are within the speed limit!");
	else if (d < 21)
		printf("You are speeding and your fine is $100.");
	else if (d < 31)
		printf("You are speeding and your fine is $270.");
	else
		printf("You are speeding and your fine is $500.");
	return 0;
}