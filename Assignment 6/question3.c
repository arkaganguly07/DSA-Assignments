/*
Q3> Write a program to check whether number of opening and closing parenthesis
are equal or not.
*/

#include <stdio.h>
#include <string.h>

#define MAXSIZE 100
#define TRUE 1
#define FALSE 0

struct Stack
{
    int top;
    int array[MAXSIZE];
}st;

void initialise(){
    st.top = -1;
}

int isFull(){
    if (st.top >= MAXSIZE - 1)
    {
        return TRUE;
    }
    
    else
        return FALSE;
}

int isEmpty(){
    if (st.top == -1)
    {
        return TRUE;
    }

    else
    {
        return FALSE;
    }
}

void push(int num){
    if (isFull())
    {
        printf("Stack is full..\n");
    }

    else
    {
        st.array[st.top + 1] = num;
        ++st.top;
    }
}

int pop(){
    if (isEmpty())
    {
        printf("Stack is empty...\n");
    }

    else
    {
        st.top = st.top - 1;
        return st.array[st.top + 1];
    }
}

int main(){
    char inputString[100], c;
    int i, length;

    initialise();
    printf("Enter a string of parenthesis:\n");
    gets(inputString);
    length = strlen(inputString);

    for (i = 0; i < length; ++i)
    {
        if (inputString[i] == '(')
        {
            push(inputString[i] == '(');
        }

        else if (inputString[i] == ')')
        {
            pop();
        }
        
        else
        {
            printf("ERROR: Invalid Character!!!\n");
        }
    }
    
    if (isEmpty())
    {
        printf("Valid Parenthesis Expression");
    }
    
    else
    {
        printf("Invalid Parenthesis Expression");
    }
    
    return 0;
}

/*
Output:
Enter a string of parenthesis:
((()(()))(((()))))
Valid Parenthesis Expression
*/