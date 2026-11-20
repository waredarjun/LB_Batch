#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   Pattern
//      Description     :   Display first iNo even numbers
//      Input           :   Integer
//      Output          :   Even numbers
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t", i * 2);
    }

    printf("\n");
}

////////////////////////////////////////////////////////////////
//
//      Entry point of the Application
//
////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}