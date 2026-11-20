#include<stdio.h>

/////////////////////////////////////////////
//
//  Function Name   : SumNonFact
//  Description     : return summation of all its non factor
//  Input           : Integer
//  Output          : integer
//  Author          : Wared Arjun Ashok
//  Date            : 20/11/2026
//  
///////////////////////////////////////////////
int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
       
    }
     return iSum;
}

////////////////////////////////////////////////////////////////
//                      
//      Entery point of the Application
//
////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}
