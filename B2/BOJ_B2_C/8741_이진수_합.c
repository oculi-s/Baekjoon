#include <stdio.h>

int k, i;
int main(){
	scanf("%d", &k);
	for (i = 0; i < k; i++)
		printf("1");
	for (i = 0; i < k - 1; i++)
		printf("0");
	return 0;
}