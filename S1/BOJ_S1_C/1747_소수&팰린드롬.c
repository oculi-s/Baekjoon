#include <stdio.h>

char p[2000002], s[8];
int n, i, j, e;

int _p(int a){
	int i;
	e = 0;
	while(a)
		s[e++] = a%10, a/=10;
	for (i=0; i<e/2; i++)
		if (s[i]!=s[e-i-1])
			return 0;
	return 1;
}

int main(){
	scanf("%d", &n);
	p[1] = 1;
	for (i=2; i<=2000001; i++)
		if (!p[i])
			for (j=i*2; j<=2000001; j+=i)
				p[j] = 1;
	for (i=n; ; i++)
		if (!p[i])
			if (_p(i)){
				printf("%d", i);
				return 0;
			}
}
