#include <stdio.h>

int n, m, i, k[3], a;
int _r(int v){
	if (v<=n){
		if (a<=v)
			a = v;
		for (int i=0; i<m; i++)
			_r(v*10+k[i]);
	}
}

int main(){
	scanf("%d %d", &n, &m);
	for (i=0; i<m; i++)
		scanf("%d", k+i);
	_r(0), printf("%d", a);
	return 0;
}
