#include <stdio.h>

int n, x, v, i, a[22];
int main(){
	a[1] = 1, a[2] = 2;
	for (i=3; i<=21; i++)
		a[i] = a[i-1] + a[i-2];
	scanf("%d", &n);
	while(n--){
		scanf("%d", &x);
		v = 0;
		for (i=21; i>=1; i--)
			if (x>=a[i])
				x -= a[i], v += a[i-1];
		printf("%d\n", v);
	}
	return 0;
}
