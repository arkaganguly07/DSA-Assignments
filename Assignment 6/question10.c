/*
Q10> Write a program to implement multiple stacks in a single array.
*/

#include <stdio.h> 

#define SIZE 20  

int array[SIZE];  
int top1 = -1;  
int top2 = SIZE;  

void push1(int data)  
{    
    if (top1 < top2 - 1)  
    {  
        top1++;  
        array[top1] = data;  
    }

    else  
    {  
        printf("Stack is full\n");
    }  
}
  
void push2(int data)  
{    
    if (top1 < top2 - 1)  
    {  
        top2--;  
        array[top2] = data;   
    }

    else  
    {  
        printf ("Stack is full..\n");  
    }
}  

void pop1()  
{   
    if (top1 >= 0)  
    {  
        int popped_element = array[top1];  
        --top1;  
    
        printf("%d is being popped from stack 1\n", popped_element);  
    }

    else  
    {  
        printf ("Stack is Empty \n");  
    }  
}  

void pop2()  
{      
    if (top2 < SIZE)  
    {  
        int popped_element = array[top2];  
        top2--;  
            
        printf ("%d is being popped from Stack 1\n", popped_element);  
    }  

    else  
    {  
        printf ("Stack is Empty!\n");  
    }  
}  

void display_stack1()  
{  
    int i; 

    for (i = top1; i >= 0; --i)  
    {  
    printf ("%d ", array[i]);  
    }  

    printf ("\n");  
}  

void display_stack2()  
{  
    int i; 

    for (i = top2; i < SIZE; ++i)  
    {  
    printf ("%d ", array[i]);  
    } 
    
    printf ("\n");  
}  
   
int main()  
{  
    int ar[SIZE];  
    int i;  
    int num_of_ele;  
    
    printf ("We can push a total of 20 values\n");      
    for (i = 1; i <= 10; ++i)  
    {  
        push1(i);  
        printf ("Value Pushed in Stack 1 is %d\n", i);  
    }  
    
    for (i = 11; i <= 20; ++i)  
    {  
        push2(i);  
        printf ("Value Pushed in Stack 2 is %d\n", i);  
    }  

    display_stack1 ();  
    display_stack2 ();  

    printf ("Pushing Value in Stack 1 is %d\n", 11);  
    push1 (11);  

    num_of_ele = top1 + 1;  
    while (num_of_ele)  
    {  
        pop1 ();  
        --num_of_ele;  
    }  

    pop1 ();  
   
    return 0;  
}  

/*
Output:
We can push a total of 20 values
Value Pushed in Stack 1 is 1
Value Pushed in Stack 1 is 2
Value Pushed in Stack 1 is 3
Value Pushed in Stack 1 is 4
Value Pushed in Stack 1 is 5
Value Pushed in Stack 1 is 6
Value Pushed in Stack 1 is 7
Value Pushed in Stack 1 is 8
Value Pushed in Stack 1 is 9
Value Pushed in Stack 1 is 10
Value Pushed in Stack 2 is 11
Value Pushed in Stack 2 is 12
Value Pushed in Stack 2 is 13
Value Pushed in Stack 2 is 14
Value Pushed in Stack 2 is 15
Value Pushed in Stack 2 is 16
Value Pushed in Stack 2 is 17
Value Pushed in Stack 2 is 18
Value Pushed in Stack 2 is 19
Value Pushed in Stack 2 is 20
10 9 8 7 6 5 4 3 2 1
20 19 18 17 16 15 14 13 12 11
Pushing Value in Stack 1 is 11
Stack is full
10 is being popped from stack 1
9 is being popped from stack 1
8 is being popped from stack 1
7 is being popped from stack 1
6 is being popped from stack 1
5 is being popped from stack 1
4 is being popped from stack 1
3 is being popped from stack 1
2 is being popped from stack 1
1 is being popped from stack 1
Stack is Empty
*/