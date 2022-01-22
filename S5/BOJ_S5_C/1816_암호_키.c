#include <stdio.h>

int n, p[1000001], i, j;
long long s, a;
int main(){
	for (i=2; i<=1000000; i++)
		if (!p[i])
			for (j=i*2; j<=1000000; j+=i)
				p[j] = 1;
	scanf("%d", &n);
	while(n--){
		scanf("%lld", &s);
		a = s;
		for (i=1000000; i>=2; i--)
			if (!p[i])
				if (s%i==0)
					s/=i;
		printf("%s\n", a==s?"YES":"NO");
	}
	return 0;
}
