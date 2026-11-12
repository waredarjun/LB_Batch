#include <stdio.h>

/////////////////////////////////////////////
//
//  Function Name   : PrintEven
//  Description     : Use for printing even number 
//  Input           : Integer
//  Output          : Integer
//  Author          : Wared Arjun Ashok
//  Date            : 03/11/2026
//  
///////////////////////////////////////////////

void PrintEven(int iNo)
{
    // Filter to handle negative or zero input
    if (iNo <= 0)       
    {
        return;
    }

    // Logic: Loop iNo times to print successive even numbers
    for (int i = 1; i <= iNo; i++)      
    {
        printf("%d\t", 2 * i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}