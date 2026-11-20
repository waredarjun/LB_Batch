#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   LastChar
//      Description     :   Return index of last occurrence of character
//      Input           :   String and one character
//      Output          :   Index of last occurrence or -1
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
////////////////////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int iIndex = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iIndex = iCount;
        }

        iCount++;
        str++;
    }

    return iIndex;
}

////////////////////////////////////////////////////////////////
//
//      Entry point of the Application
//
////////////////////////////////////////////////////////////////

int main()
{
    char arr[100];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: ");
    scanf(" %99[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Index of last occurrence is %d\n", iRet);

    return 0;
}