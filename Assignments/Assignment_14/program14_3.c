#include<stdio.h>

/////////////////////////////////////////////
//
//  Function Name   : NonFact
//  Description     : display non-factor
//  Input           : Integer
//  Output          : integer
//  Author          : Wared Arjun Ashok
//  Date            : 20/11/2026
//  
///////////////////////////////////////////////
void NonFact(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d ",iCnt);
        }
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
    
    printf("Enter number: ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}
