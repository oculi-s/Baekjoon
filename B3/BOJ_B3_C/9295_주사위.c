#include <stdio.h>

int n, i, a, b;
int main(){
	scanf("%d", &n);
	for (i = 1; i<= n; i++){
		scanf("%d %d", &a, &b);
		printf("Case %d: %d\n", i, a + b);
	}
	return 0;
}
