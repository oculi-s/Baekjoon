#include <stdio.h>

char s[51];
int a[26], b, i, j, t = 27;
int main() {
    scanf("%s", s);
    while (s[i])
        a[s[i] - 'A']++, i++;
    for (i = 0; i < 26; i++)
        if (a[i] % 2)
            b++, t = i;
    if (b > 1) {
        printf("I'm Sorry Hansoo");
    } else {
        for (i = 0; i < 26; i++)
            for (j = 0; j < a[i] / 2; j++)
                printf("%c", i + 'A');
        if (t < 27)
            printf("%c", t + 'A');
        for (i = 25; i >= 0; i--)
            for (j = 0; j < a[i] / 2; j++)
                printf("%c", i + 'A');
    }
    return 0;
}