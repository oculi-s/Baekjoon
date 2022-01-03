#include <stdio.h>
#include <string.h>

int a, b, i, n;
char s[11][12];
int main(){
	scanf("%d %d", &a, &b);
	while(a--){
		scanf("%s", s[a]);
		for (i = strlen(s[a]) - 1; i>=0; i--)
			printf("%c", s[a][i]);
		printf("\n");
	}
	return 0;
}
