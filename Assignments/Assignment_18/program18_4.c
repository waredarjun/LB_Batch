/*
input: iRow = 6  iCol = 5
output: *   *   *   *   *
        *   @   @   @   *
        *   @   @   @   *
        *   @   @   @   *
        *   *   *   *   *
*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//      Function Name   : Pattern
//      Description     : Display a rectangular pattern of * and @
//      Input           : Number of rows and columns
//      Output          : Rectangular pattern
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
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("*\t");
            }
            else
            {
                printf("@\t");
            }
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