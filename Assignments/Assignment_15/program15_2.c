#include <stdio.h>

typedef int bool;

#define true 1
#define false 0

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   ChkGreater
//      Description     :   Check number is gretor then 100 or not                     
//      Input           :   integer
//      Output          :   string
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
bool ChkGreater(int iValue)
{
    if(iValue > 100)
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
//      Entery point of the Application
//
////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number: ");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if(bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}
