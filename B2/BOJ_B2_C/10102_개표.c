#include <stdio.h>

int n, i, a[2];
char s[16];
int main(){
    scanf("%d\n%s", &n, s);
    while(s[i]){a[s[i] == 'B']++;i++;}
    printf("%s", a[0]==a[1]?"Tie":a[0]>a[1]?"A":"B");
    return 0;
}