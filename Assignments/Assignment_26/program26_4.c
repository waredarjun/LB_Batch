#include <stdio.h>

#define true 1
#define false 0

typedef int bool;

////////////////////////////////////////////////////////////////
//
//      Function Name   : ChkSpecial
//      Description     : Checks whether the given character is
//                        a special symbol or not.
//      Input           : Character
//      Output          : true or false
//      Author          : Wared Arjun Ashok
//      Date            : 20/11/2026
//
////////////////////////////////////////////////////////////////
bool ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' ||
       ch == '%' || ch == '^' || ch == '&' || ch == '*')
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

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    bRet = ChkSpecial(cValue);

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