#include <stdio.h>

int n, t = 2;
int main(){
	scanf("%d", &n);
	while(n--)
		t = 2*t-1;
	printf("%d", t*t);
	return 0;
}
