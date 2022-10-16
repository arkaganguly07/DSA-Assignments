/*
Q6> Write a program to implement reursive and tail recursive version:
 (a)to find factorial of a number
 (b)to find Fibonacci series
*/

#include <stdio.h>

int main()
{
    int n;
    int first = 0, second = 1, sum = 0;

    printf("Enter the end term for the series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d, ", first, second);
    sum = first + second;
    while(sum <= n)
    {
        printf("%d, ",sum);
        first = second;
        second = sum;
        sum = first + second;
    }

    return 0;
}

/*
Output:
Enter the end term for the series: 100
Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89
*/