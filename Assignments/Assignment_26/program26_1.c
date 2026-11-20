#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   DisplayASCII
//      Description     :   Display ASCII table from 0 to 255
//      Input           :   Nothing
//      Output          :   Symbol, Decimal, Hexadecimal and Octal
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int i = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("---------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%c\t%d\t%X\t\t%o\n", i, i, i, i);
    }
}

////////////////////////////////////////////////////////////////
//
//      Entry point of the Application
//
////////////////////////////////////////////////////////////////

int main()
{
    DisplayASCII();

    return 0;
}