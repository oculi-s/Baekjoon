#include <stdio.h>

int n, i, j, p[1000001];

int _c(int a){
	int t = 0;
	while(a)
		t += (a%10)*(a%10), a/=10;
	return t==1||t==7?1:t<10?0:_c(t);
}

int main(){
	p[1]= 1;
	for (i=2; i<=1000000; i++)
		if (!p[i])
			for (j=i*2; j<=1000000; j+=i)
				p[j] = 1;
	scanf("%d", &n);
	for (i=2; i<=n; i++)
		if (!p[i])
			if (_c(i))
				printf("%d\n", i);
	return 0;
}
