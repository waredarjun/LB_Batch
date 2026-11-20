#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   strrevx
//      Description     :   Reverse a string in place
//      Input           :   String
//      Output          :   Reversed string
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
////////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    int iStart = 0;
    int iEnd = 0;
    char ch = '\0';

    // Find the last index of the string
    while(str[iEnd] != '\0')
    {
        iEnd++;
    }

    iEnd--;

    // Reverse the string
    while(iStart < iEnd)
    {
        ch = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = ch;

        iStart++;
        iEnd--;
    }
}

////////////////////////////////////////////////////////////////
//
//      Entry point of the Application
//
////////////////////////////////////////////////////////////////

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf(" %99[^\n]", arr);

    StrRevX(arr);

    printf("Reversed string is: %s\n", arr);

    return 0;
}