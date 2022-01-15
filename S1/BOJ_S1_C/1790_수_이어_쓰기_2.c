#include <stdio.h>

int n, k, a[8] = {9,2*9e1,3*9e2,4*9e3,5*9e4,6*9e5,7*9e6,8*9e7}, i, j, t;
int main(){
	scanf("%d %d", &n, &k);
	while(k>a[i])
		k-=a[i], i++;
	t = a[i]/(i+1)/9+(k+i)/(i+1)-1;
	j = (k-1)%(i+1);
	if (t > n)
		printf("-1");
	else{
		while(j++<i)
			t/=10;
		printf("%d", t%10);
	}
	return 0;
}
