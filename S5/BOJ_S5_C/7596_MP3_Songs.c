#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n, i, t;
char s[200][251];

int _c(char a[251], char b[251]){
	return strcmp(a, b);
}

int main(){
	scanf("%d\n", &n);
	while(n){
		for (i=0; i<n; i++)
			gets(s[i]);
		qsort(s, n, sizeof(char)*251, _c);
		printf("%d\n", ++t);
		for (i=0; i<n; i++)
			printf("%s\n", s[i]);
		scanf("%d\n", &n);
	}
	return 0;
}
