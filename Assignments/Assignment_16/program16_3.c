/*
input: iRow = 3  iCol = 5
output: A   A   A   A   A
        B   B   B   B   B
        C   C   C   C   C

*/
#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//      Function Name   : Pattern
//      Description     : Display alphabet pattern row-wise
//      Input           : Integer, Integer
//      Output          : void
//      Author          : Wared Arjun Ashok
//      Date            : 20/11/2026
//
////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t", 'A' + i - 1);
        }

        printf("\n");
    }
}

////////////////////////////////////////////////////////////////
//
//      Entry point of the Application
//
////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
