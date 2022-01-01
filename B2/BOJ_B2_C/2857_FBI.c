#include <stdio.h>
#include <string.h>

int i, j, c;
char s[11];
int main(){
    for (i = 1; i <= 5; i++){
        scanf("%s", s);
        for (j = 0; j < strlen(s) - 2; j++){
            if (s[j] == 'F' && s[j+1] == 'B' && s[j+2] == 'I'){
                printf("%d ", i), c = 1;
				break;
            }
        }
    }
    if (!c){
        printf("HE GOT AWAY!");
    }
    return 0;
}
