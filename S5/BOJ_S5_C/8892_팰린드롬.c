#include <stdio.h>
#include <string.h>

int _p(char s[10001]){
	int i, n = strlen(s);
	for (i=0; i<(n+1)/2; i++)
		if (s[i]!=s[n-1-i])
			return 0;
	return 1;
}

int t, n, i, j, k, a;
char s[100][10001], c[10001];
int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for (i=0; i<n; i++)
			scanf("%s", s[i]);
		a = 0;
		for (i=0; i<n && !a; i++)
			for (j=i+1; j<n; j++){
				strcpy(c, s[i]);
				strcpy(c+strlen(s[i]), s[j]);
				if (_p(c)){
					printf("%s\n", c), a = 1;
					break;
				}
				for (k=0; c[k]; k++)
					c[k] = 0;
				strcpy(c, s[j]);
				strcpy(c+strlen(s[j]), s[i]);
				if (_p(c)){
					printf("%s\n", c), a = 1;
					break;
				}
				for (k=0; c[k]; k++)
					c[k] = 0;
			}
		if (!a)
			printf("0\n");
	}
	return 0;
}
