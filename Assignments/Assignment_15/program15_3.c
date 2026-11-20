#include <stdio.h>

typedef int bool;

#define true 1
#define false 0

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   ChkEqual
//      Description     :   check Two number are equal or not                     
//      Input           :   integer integer
//      Output          :   string
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
bool ChkEqual(int iValue1, int iValue2)
{
    if(iValue1 == iValue2)
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
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Please enter two number: ");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(iValue1==iValue2)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}
