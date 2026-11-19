#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   OddFactorial
//      Description     :   printing odd factorial of input                     
//      Input           :   integer
//      Output          :   integer
//      Author          :   Wared Arjun Ashok
//      Date            :   19/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
int OddFactorial(int iNo)
{
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        if(iNo % 2 != 0)
        {
            iFact = iFact * iNo;
        }

        iNo--;
    }

    return iFact;
}

////////////////////////////////////////////////////////////////
//                      
//      Entery point of the Application
//
////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);

    return 0;
}