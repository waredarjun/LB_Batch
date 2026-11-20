#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   Count
//      Description     :   count frequency of such a digits which are less than 6                       
//      Input           :   integer 
//      Output          :   integer
//      Author          :   Wared Arjun Ashok
//      Date            :   19/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
int Count(int iNo)
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

        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d", iRet);

    return 0;
}
