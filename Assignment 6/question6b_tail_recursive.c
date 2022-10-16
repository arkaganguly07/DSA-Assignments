/*
Q6> Write a program to implement reursive and tail recursive version:
 (a)to find factorial of a number
 (b)to find Fibonacci series
*/

#include <stdio.h>

int fib(int n, int a, int b)
{
	if (n == 0)
		return a;

	if (n == 1)
		return b;

	return fib(n - 1, b, a + b);
}

// Driver Code
int main()
{
	int n = 9, a = 0, b = 1;
	int fibonacci;

    fibonacci = fib(n, a, b);
    printf("fib(%d) = %d", n, fibonacci);

	return 0;
}

/*
Output:
fib(9) = 34
*/