#include<stdio.h>

#define true 1
#define false 0

typedef int bool;

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   ChkSmall
//      Description     :   Check whether character is lowercase
//      Input           :   Character
//      Output          :   true or false
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
////////////////////////////////////////////////////////////////////

bool ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("It is Small case Charector\n");
    }
    else
    {
        printf("It is not Small case Charector\n");
    }

    return 0;
}