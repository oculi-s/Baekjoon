#include <stdio.h>
#include <stdlib.h>

int n, i, a[10], b[10], c, d, m;

int _r(int c, int d, int e){
	int i;
	m = abs(c-d) < m ? abs(c-d) : m;
	for (i=e+1; i<n; i++)
		_r(c*a[i], d+b[i], i);
}

int main(){
	scanf("%d", &n);
	m = 1000000000;
	for (i=0; i<n; i++)
		scanf("%d %d", a+i, b+i);
	for (i=0; i<n; i++)
		_r(a[i], b[i], i);
	printf("%d", m);
	return 0;
}
