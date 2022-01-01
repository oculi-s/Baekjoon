#include <stdio.h>
#include <string.h>

int n, i, c;
char a[21], b[21];

int main(){
	scanf("%d", &n);
	while(n--){
		scanf("%s %s", a, b);
		printf("Distances:");
		for (i = 0; i < strlen(a); i++){
			printf(" %d", (b[i]-a[i]+26)%26);
		}
		printf("\n");
	}
	return 0;
}
