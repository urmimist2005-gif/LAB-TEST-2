#include <stdio.h>

int main()
{
    int n, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Jodi negative number hoy, tahole positive baniye nite pari
    if (n < 0) {
        n = -n;
    }

    while (n != 0)
    {
        remainder = n % 10;   // Last digit ber kora
        sum = sum + remainder;// Digits gulo jog kora
        n /= 10;              // Last digit bad dewa
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
