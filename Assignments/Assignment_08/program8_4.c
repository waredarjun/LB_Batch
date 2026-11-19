

/*
write a program which accept number from user and display its table

input: 2
output: 2 4 6 8 10 12 14 16 18 20
input: -2
output: 2 4 6 8 10 12 14 16 18 20

*/


#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   Table
//      Description     :   printing table of input number                     
//      Input           :   integer
//      Output          :   integr
//      Author          :   Wared Arjun Ashok
//      Date            :   18/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d ", iNo * iCnt);
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

    Table(iValue);

    return 0;
}
