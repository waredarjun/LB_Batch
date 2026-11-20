#include<stdio.h>

#define true 1
#define false 0

typedef int bool;

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   ChkZero
//      Description     :   Accept number from user and check wheter it contain 0 in it or not.                       
//      Input           :   integer 
//      Output          :   string
//      Author          :   Wared Arjun Ashok
//      Date            :   19/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
bool ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return true;
        }

        iNo = iNo / 10;
    }

    return false;
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

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It contain zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}

