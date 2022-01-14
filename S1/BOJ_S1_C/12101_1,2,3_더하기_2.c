#include <stdio.h>

int n, k, a[11], t;
int main(){
	a[0] = 100, a[1] = 1, a[2] = 2, a[3] = 4;
	for (n=4; n<=10; n++)
		a[n] = a[n-1]+a[n-2]+a[n-3];
	scanf("%d %d", &n, &k);
	if (k > a[n]){
		printf("-1");
		return 0;
	} else if (n==1){
		printf("1");
		return 0;
	}
	while(n > 1){
		if (k > a[n-1]+a[n-2])
			k -= a[n-1]+a[n-2], printf("3"), n-=3;
		else if (k > a[n-1])
			k -= a[n-1], printf("2"), n-=2;
		else
			printf("1"), n--;
		if (n > 1)
			printf("+");
	}
	if (n > 0)
		printf("+%d", n);
	return 0;
}
