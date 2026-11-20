#include<stdio.h>

#define true 1
#define false 0

typedef int bool;

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   ChkDigit
//      Description     :   Check whether character is a digit
//      Input           :   Character
//      Output          :   true or false
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
////////////////////////////////////////////////////////////////////

bool ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////
//
//      Entry point of the Application
//
////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character: ");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is Not Digit\n");
    }

    return 0;
}