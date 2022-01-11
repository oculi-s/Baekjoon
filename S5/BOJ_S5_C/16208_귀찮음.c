#include <stdio.h>

int n, i, t, a[102], b;
double c;

int main(){
	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%d", &t), a[t]++, b += t;
	for (i=1; i<=101; i++)
		while (a[i])
			b -= i, a[i]--, c += (double)(i * b); 
	printf("%.0lf", c);
	return 0;
}
