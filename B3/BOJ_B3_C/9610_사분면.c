#include <stdio.h>

int n, x, y, q[4], a, i;
int main(){
    scanf("%d", &n);
while(n--){
        scanf("%d %d", &x, &y);
        if (x == 0 || y == 0)
            a++;
        else
            q[(y < 0) ? 2 + (x > 0):(x < 0)]++;
        }
    for (; i < 4; i++)
        printf("Q%d: %d\n", i + 1, q[i]);
    printf("AXIS: %d", a);
    return 0;
}