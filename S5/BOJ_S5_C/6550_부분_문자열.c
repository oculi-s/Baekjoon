#include <stdio.h>
#include <string.h>

char a[100001], b[100001];
int _c(int m, int n){
	int j, t;
	for (j=0, t=0; j<n && n-j<=m-t;)
		if (a[j] != b[t+j])
			t++;
		else
			j++;
	return j==n;
}
int main(){
	while(scanf("%s %s", a, b) != EOF)
		printf("%s\n", _c(strlen(b), strlen(a))?"Yes":"No");
	return 0;
}
