#include<stdio.h>

#define true 1
#define false 0

typedef int bool;

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   ChkCapital
//      Description     :   Check whether character is Capital
//      Input           :   Character
//      Output          :   true or false
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
////////////////////////////////////////////////////////////////////

bool ChkCapital(char ch)
{
    if((ch >= 'A' && ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("It is Capital Charector\n");
    }
    else
    {
        printf("It is Not Capital Charector\n");
    }

    return 0;
}