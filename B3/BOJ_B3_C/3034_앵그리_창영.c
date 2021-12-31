#include <stdio.h>

int n, w, h, l;
int main(){
    scanf("%d %d %d", &n, &w, &h);
    while(n--){
        scanf("%d", &l);
        printf("%s\n",(l * l <= w * w + h * h)?"DA":"NE");
    }
    return 0;
}