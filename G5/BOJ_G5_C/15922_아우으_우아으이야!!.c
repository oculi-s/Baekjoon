#include <stdio.h>

int n, m, i, j, x[100000], y[100000], s;
int main(){
	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%d %d", x+i, y+i);
	s = y[0]-x[0], m = -1e9;
	for (i=1; i<n; i++){
		m = m > y[i-1] ? m:y[i-1];
		if (m<=x[i])
			s += y[i]-x[i];
		else if (m<y[i])
			s += y[i]-m;	
	}
	printf("%d", s);
	return 0;
}
