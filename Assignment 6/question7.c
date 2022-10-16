/*
Q7> Write a program to implement the "Tower of Hanoi" using recursion.
*/

#include <stdio.h>
#include <stdlib.h>
 
void hanoi(int n, char rodFrom, char rodMiddle, char rodTo){
    if (n == 1)
    {
        printf("Disk 1 moved from %c to %c \n", rodFrom, rodTo);
        return;
    }

    hanoi(n-1, rodFrom, rodTo, rodMiddle);
    printf("Disk %d moved from %c to %c \n", n, rodFrom, rodTo);
    hanoi(n - 1 , rodMiddle, rodFrom, rodTo);
 
}

int main()
{
    hanoi(3, 'A', 'B', 'C');
    return 0;
}

/*
Output:
Disk 1 moved from A to C
Disk 2 moved from A to B
Disk 1 moved from C to B
Disk 3 moved from A to C
Disk 1 moved from B to A
Disk 2 moved from B to C
Disk 1 moved from A to C
*/