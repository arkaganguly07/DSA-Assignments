/*
Q6> Write a program to implement reursive and tail recursive version:
 (a)to find factorial of a number
 (b)to find Fibonacci series
*/

#include <stdio.h>
long int multiplyNumbers(int n);
int main(){
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Factorial of %d = %ld", n, multiplyNumbers(n));

    return 0;
}

long int multiplyNumbers(int n){
    if (n>=1)
        return n*multiplyNumbers(n-1);

    else
        return 1;
}


/*
Output:
Enter a positive integer: 5
Factorial of 5 = 120
*/