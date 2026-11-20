#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   CountWhite
//      Description     :   Count white spaces in a string
//      Input           :   String
//      Output          :   Number of white spaces
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

////////////////////////////////////////////////////////////////
//
//      Entry point of the Application
//
////////////////////////////////////////////////////////////////

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string: ");
    scanf(" %99[^\n]", arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces: %d\n", iRet);

    return 0;
}