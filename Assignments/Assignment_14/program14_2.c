#include<stdio.h>

/////////////////////////////////////////////
//
//  Function Name   : FactRev
//  Description     : display factor in decreasing order
//  Input           : Integer
//  Output          : integer
//  Author          : Wared Arjun Ashok
//  Date            : 20/11/2026
//  
///////////////////////////////////////////////
void FactRev(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo - 1 ; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
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

    FactRev(iValue);
    

    return 0;
}
