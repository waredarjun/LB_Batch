#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   DisplayDigit
//      Description     :   accept number from user and display its digits in reverse order                      
//      Input           :   integer 
//      Output          :   integer
//      Author          :   Wared Arjun Ashok
//      Date            :   19/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo <= 0 )
    {
        iNo = - iNo;
    }
    while (iNo>0)
    {
        iDigit = iNo % 10;

        printf("%d\n", iDigit);
        
        iNo = iNo / 10;
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
    scanf("%d",&iValue);

    DisplayDigit(iValue);
    return 0;
}