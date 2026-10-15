
#include <stdio.h>

int main()
{
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    // Jodi number 0 hoy, tahole digit 1 ta
    if (n == 0) {
        count = 1;
    } else {
        // Jodi negative number hoy, tahole positive kore nite pari (optional)
        if (n < 0) {
            n = -n;
        }

        while (n != 0) {
            n = n / 10; // Protibar ekta kore digit kombe
            count++;    // Count barbe
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
