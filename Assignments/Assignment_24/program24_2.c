#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   CountChar
//      Description     :   Count frequency of a character in string
//      Input           :   String and one character
//      Output          :   Frequency of the character
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
////////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: ");
    scanf(" %99[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d\n", iRet);

    return 0;
}