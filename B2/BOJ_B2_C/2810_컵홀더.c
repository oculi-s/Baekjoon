#include <stdio.h>
#include <string.h>

int n, i, c;
char s[101];
int main(){
	scanf("%d\n%s", &n, s);
	for (i = 0; i < strlen(s); i++){
		if (s[i] == 'L'){
			n--; i++; c = 1;
		}
	}
	printf("%d", n + c);
	return 0;
}
