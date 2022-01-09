#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _ci(char a[13], char b[13]){
	return strcmp(a, b);
}

int _cd(char a[13], char b[13]){
	return strcmp(b, a);
}

int n, i;
char s[20][13], a[20][13], b[20][13];
int main(){
	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%s", s[i]), strcpy(a[i], s[i]), strcpy(b[i], s[i]);
	qsort(a, n, sizeof(char)*13, _ci);
	qsort(b, n, sizeof(char)*13, _cd);
	for (i=0; i<n; i++)
		if (strcmp(s[i], a[i]))
			break;
	if (i==n)
		printf("INCREASING");
	else{
		for (i=0; i<n; i++)
			if (strcmp(s[i], b[i]))
				break;
		if (i==n)
			printf("DECREASING");
		else
			printf("NEITHER");
	}

	return 0;
}
