#include <stdio.h>
#include <string.h>
#include <math.h>

long long c, e[11];
int n, i, j;
char s[11];
int main(){
	for (i=0; i<11; i++)
		e[i] = (long long)pow(26,i);
	scanf("%d\n%s", &n, s);
	c = strlen(s);
	for (i=0; i<n; i++)
		if (s[i])
			for (j=0; j<n-i; j++)
				c += (s[i]-'a')*e[j];
	printf("%lld", c);
	return 0;
}
