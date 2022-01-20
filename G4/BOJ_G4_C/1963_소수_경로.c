#include <stdio.h>

int t, i, j, a, b, p[10000], v[10000];

void _r(int a, int x){
	int t, i;
	if (x<v[a] && !p[a] && a>=1000 && a<10000){
		v[a] = x;
		if (a != b){
			for (t=a%1000; t<10000; t+=1000)
				_r(t, x+1);
			for (t=(a/1000)*1000+a%100, i=0; i<10; i++, t+=100)
				_r(t, x+1);
			for (t=(a/100)*100+a%10, i=0; i<10; i++, t+=10)
				_r(t, x+1);
			for (t=(a/10)*10, i=0; i<10; i++, t++)
				_r(t, x+1);
		}
	}
}

int main(){
	for (i=2; i<10000; i++)
		if (!p[i])
			for (j=i*2; j<10000; j+=i)
				p[j] = 1;
	scanf("%d", &t);
	while(t--){
		for (i=1; i<10000; i++)
			v[i] = 10000;
		scanf("%d %d", &a, &b);
		_r(a, 0);
		printf("%d\n", v[b]);
	}
	return 0;
}
