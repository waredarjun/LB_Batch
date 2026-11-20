#include<stdio.h>

/////////////////////////////////////////////
//
//  Function Name   : MultFact
//  Description     : return multiplication of factor
//  Input           : Integer
//  Output          : integer
//  Author          : Wared Arjun Ashok
//  Date            : 20/11/2026
//  
///////////////////////////////////////////////
int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
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

    iRet = MultFact(iValue);
    printf("%d", iRet);

    return 0;
}
