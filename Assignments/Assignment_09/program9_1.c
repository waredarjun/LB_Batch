#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   Display
//      Description     :   printing * and # pattern throug input number                     
//      Input           :   integer
//      Output          :   special symbol
//      Author          :   Wared Arjun Ashok
//      Date            :   19/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#");
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

    Display(iValue);

    return 0;
}
