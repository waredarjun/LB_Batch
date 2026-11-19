/*
write a program to find factorial of given number

input:5
output: 120 (5*4*3*2*1*)
input:-5
output:120
*/



#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   Factorial
//      Description     :   print facttorial of user input                     
//      Input           :   integer
//      Output          :   integr
//      Author          :   Wared Arjun Ashok
//      Date            :   18/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
int Factorial(int iNo)
{
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iFact = iFact * iNo;
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

    iRet = Factorial(iValue);

    printf("Factorial is: %d\n", iRet);

    return 0;
}

