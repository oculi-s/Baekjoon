#include <stdio.h>
#include <string.h>
#define N 100001

int n;
char s[N], t;

int _p(char s[N], int e){
	int i, j, c = 0, a, b;
	for (i=0, j=e-1; i<j; i++, j--){
		if (s[i]!=s[j]){
			if (!c)
				c = 1, a=i, b=j, j++;
			else if (c == 1)
				i=a-1, j=b, c++;
			else
				return 2;
		}
	}
	return c ? 1:0;
}

int main(){
	scanf("%d", &n);
	while(n--)
		scanf("%s", s), printf("%d\n", _p(s, strlen(s)));
	return 0;
}
