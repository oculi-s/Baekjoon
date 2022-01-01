#include <stdio.h>

int n, i, a[4], b, c[4] = {1,1,0,-1000};
int main(){
	scanf("%d", &n);
	while(n--){
		for(i = 0; i<4; i++){
			scanf("%d", a + i);
		}
		for(i = 0; i<4; i++){
			scanf("%d", &b);
			a[i] += b;
			a[i] = a[i] > c[i] ? a[i]:c[i];
		}
		printf("%d\n", a[0]+a[1]*5+a[2]*2+a[3]*2);
	}
	return 0;
}
