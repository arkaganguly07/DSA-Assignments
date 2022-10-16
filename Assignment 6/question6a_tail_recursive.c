/*
Q6> Write a program to implement reursive and tail recursive version:
 (a)to find factorial of a number
 (b)to find Fibonacci series
*/

#include <stdio.h>

long fact(long n, long a){
    if (n == 0)
    {
        return a;
    }
    
    return fact(n - 1, a * n);
}

int main(){
    int factorial;
    
    factorial = fact(5, 1);
    printf("The factorial = %d", factorial);

    return 0;
}

/*
Output:
The factorial = 120
*/