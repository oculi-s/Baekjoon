#include <stdio.h>

int main() {
    int A, B, C;
    scanf_s("%d %d %d", &A, &B, &C);
    printf("%d\n%d\n%d\n%d", (A + B) % C, ((A % C) + (B % C)) % C, (A * B) % C, ((A % C) * (B % C)) % C);
    return 0;
}