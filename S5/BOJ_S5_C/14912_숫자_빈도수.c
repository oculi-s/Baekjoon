#include <stdio.h>

int n, i, c[10], a;

void _c(int i){
	while(i)
		c[i%10]++, i/=10;
}

int main(){
	scanf("%d %d", &n, &a);
	for (i=1; i<=n; i++)
		_c(i);
	printf("%d", c[a]);
	return 0;
}	
