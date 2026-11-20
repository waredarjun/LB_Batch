#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   CountTwo
//      Description     :   count frequency of 2                      
//      Input           :   integer 
//      Output          :   integer
//      Author          :   Wared Arjun Ashok
//      Date            :   19/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 2)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
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

    iRet = CountTwo(iValue);

    printf("%d", iRet);

    return 0;
}
