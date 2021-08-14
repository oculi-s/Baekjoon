#include <stdio.h>

int main() {
    char s[103], a[103];
    scanf("%s", s);
    int i, n = 0, l = 0;
    while (s[l++]);
    l--, a[l] = 0;
    for (i = 0; i < l; i++)
        a[i] = '.';
    while (n < l) {
        if (s[n] == 'X' && s[n + 1] == 'X' && s[n + 2] == 'X' && s[n + 3] == 'X')
            a[n] = 'A', a[n + 1] = 'A', a[n + 2] = 'A', a[n + 3] = 'A', n += 4;
        else if (s[n] == 'X' && s[n + 1] == 'X') {
            if (s[n + 2] == 'X')
                break;
            else
                a[n] = 'B', a[n + 1] = 'B', n += 2;
        } else if (s[n] == 'X' && (s[n + 1] == '.' || s[n + 1] == 0))
            break;
        else
            n++;
    };
    if (n < l)
        printf("-1");
    else
        printf("%s", a);
    return 0;
}