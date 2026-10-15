
#include <stdio.h>

int main()
{
    int N, i, sum = 0;
    printf("Enter  number N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        if(i % 2 == 0) // Jodi songkhata jor (even) hoy
        {
            sum = sum + i;
        }
    }

    printf("Sum of even numbers is = %d", sum);

    return 0;
}
