#include <stdio.h>

int n, i, j, p[1000], s[500], e;
int main(){
	scanf("%d", &n);
	for (i=2; i<1000; i++)
		if (!p[i])
			for (j=2*i; j<1000; j+=i)
				p[j] = 1;
	for (i=2; i<1000; i++)
		if (!p[i])
			s[e] = i, e++;
	while(n++){
		for (i=0; i<e; i++)
			if (s[i]*s[i+1] == n){
				printf("%d", n);
				return 0;
			}
	}
}
