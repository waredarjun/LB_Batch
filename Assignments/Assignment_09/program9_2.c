#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   DollarToINR
//      Description     :   converting Doller currency into Indian                     
//      Input           :   integer
//      Output          :   integer
//      Author          :   Wared Arjun Ashok
//      Date            :   19/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
int DollarToINR(int iNo)
{
    int iAns = 0;

    iAns = iNo * 70;

    return iAns;
}

////////////////////////////////////////////////////////////////
//                      
//      Entery point of the Application
//
////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}
