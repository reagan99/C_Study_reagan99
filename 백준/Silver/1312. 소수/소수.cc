#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int A, B, N;
    scanf("%d %d %d", &A, &B, &N);

    int quotient = A / B;
    int remainder = A % B;

    for (int i = 0; i < N; i++) {
        remainder *= 10;
        quotient = (remainder / B);
        remainder = (remainder % B);
    }

    printf("%d\n", quotient);

    return 0;
}
