
#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   FactorialDiff
//      Description     :   printing diffrence between  even factorial and odd factorial                     
//      Input           :   integer
//      Output          :   integer
//      Author          :   Wared Arjun Ashok
//      Date            :   19/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
int FactorialDiff(int iNo)
{
    int iEvenFact = 1;
    int iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        if(iNo % 2 == 0)
        {
            iEvenFact = iEvenFact * iNo;
        }
        else
        {
            iOddFact = iOddFact * iNo;
        }

        iNo--;
    }

    return (iEvenFact - iOddFact);
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

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is %d", iRet);

    return 0;
}

