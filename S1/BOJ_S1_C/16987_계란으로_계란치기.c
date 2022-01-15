#include <stdio.h>

int n, i, a[8], b[8], m;

int _r(int a[8], int i, int c){
	int j;
	if (c > m)
		m = c;
	if (a[i] > 0){
		if (i < n)
			for (j=0; j<n; j++)
				if (a[j] > 0 && i != j){
					a[j]-=b[i], a[i]-=b[j];
					_r(a, i+1, c+(a[i]<=0)+(a[j]<=0));
					a[j]+=b[i], a[i]+=b[j];
				}
	} else {
		_r(a, i+1, c);
	}
}

int main(){
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d %d", a+i, b+i);
	_r(a, 0, 0);
	printf("%d", m);
	return 0;
}
