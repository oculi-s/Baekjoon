#include <stdio.h>

int n, i, j, m;
float a[10000000];
int main(){
	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%f", a+i);
	for (j=0; j<7; j++){
		for (i=0; i<n; i++)
			m = a[m]<a[i]?m:i;
		printf("%.3f\n", a[m]), a[m] = 101;
	}
	return 0;
}
