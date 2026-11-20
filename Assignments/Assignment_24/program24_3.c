#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   FirstChar
//      Description     :   Return index of first occurrence of character
//      Input           :   String and one character
//      Output          :   Index of first occurrence or -1
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCount;
        }

        iCount++;
        str++;
    }

    return -1;
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

    iRet = FirstChar(arr, cValue);

    printf("Index of first occurrence is %d\n", iRet);

    return 0;
}