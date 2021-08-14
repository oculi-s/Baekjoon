#include <stdbool.h>
#include <stdio.h>

int _abs(int a) {
    return a > 0 ? a : -a;
}
int main() {
    char a[37][2];
    bool b[6][6];
    int i, dx, dy;
    for (i = 0; i < 36; i++)
        b[i / 6][i % 6] = 0;
    for (i = 0; i < 36; i++)
        scanf("%s\n", a[i]), a[i][0] -= 65, a[i][1] -= 48;
    a[36][0] = a[0][0], a[36][1] = a[0][1];
    for (i = 0; i < 36; i++) {
        dx = _abs(a[i][0] - a[i + 1][0]), dy = _abs(a[i][1] - a[i + 1][1]);
        if (b[a[i][0]][a[i][1]] || (dx > 2) || (dy > 2) || (dx == 0) || (dy == 0)){
            break;
        }
        b[a[i][0]][a[i][1]] = 1;
    }
    printf("%s", i == 36 ? "Valid" : "Invalid");
    return 0;
}