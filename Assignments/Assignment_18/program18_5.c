/*
input: iRow = 4  iCol = 4
output: 1   2   3   4
        1   *   *   4
        1   *   *   4
        1   2   3   4
*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//      Function Name   : Pattern
//      Description     : Display numbers on the boundary and stars inside
//      Input           : Number of rows and columns
//      Output          : Pattern of numbers and stars
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
            if(i == 1 || i == iRow)
            {
                printf("%d\t", j);
            }
            else if(j == 1)
            {
                printf("1\t");
            }
            else if(j == iCol)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("*\t");
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