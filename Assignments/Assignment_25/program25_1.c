#include<stdio.h>

#define true 1
#define false 0

typedef int bool;

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   ChkAlpha
//      Description     :   Check whether character is an alphabet
//      Input           :   Character
//      Output          :   true or false
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
////////////////////////////////////////////////////////////////////

bool ChkAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is Not Charector\n");
    }

    return 0;
}