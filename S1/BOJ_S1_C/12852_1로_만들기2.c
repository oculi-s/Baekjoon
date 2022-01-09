#include <stdio.h>
#define N 10000001

int n, c, a[N], b[N], s[N], e, i;

void _r(int n, int c){
	c++;
	if (!(n%3))
		if (c < a[n/3])
			a[n/3] = c, b[n/3] = n, _r(n/3, c);
	if (!(n%2))
		if (c < a[n/2])
			a[n/2] = c, b[n/2] = n, _r(n/2, c);
	if (n>1)
		if (c < a[n-1])
			a[n-1] = c, b[n-1] = n, _r(n-1, c);
}

int main(){
	scanf("%d", &n);
	for (i=0; i<n; i++)
		a[i] = N;
	_r(n, 0);
	printf("%d\n", a[1]);
	i = 1;
	while(i!=n)
		s[e++] = i, i = b[i];
	printf("%d ", n);
	for (i=e-1; i>=0; i--)
		printf("%d ", s[i]);
	return 0;
}
