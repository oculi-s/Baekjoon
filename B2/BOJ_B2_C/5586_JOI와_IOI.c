#include <stdio.h>
#include <string.h>

int i, c[2];
char a[10001];
int main(){
	scanf("%s", a);
	for(i = 1; i < strlen(a) - 1; i++){
		if (a[i] == 'O'){
			if (a[i+1] == 'I'){
				if (a[i-1] == 'I' || a[i-1] == 'J'){
					c[a[i-1] == 'I']++;
				}
			}
		}
	} 
	printf("%d\n%d", c[0], c[1]);
	return 0;
}
