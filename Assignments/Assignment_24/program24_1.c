#include<stdio.h>

#define true 1
#define false 0

typedef int bool;

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   ChkChar
//      Description     :   Check whether character is present in string
//      Input           :   String and one character
//      Output          :   true or false
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
////////////////////////////////////////////////////////////////////

bool ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return true;
        }

        str++;
    }

    return false;
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
    bool bRet = false;

    printf("Enter string: ");
    scanf(" %99[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == true)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}