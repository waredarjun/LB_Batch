/*
write a program which accept number from user and display its table in reverse order
input:2
output:20 18 16 14 12 10 8 6 4 2
input:-2
output:20 18 16 14 12 10 8 6 4 2
*/
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   TableRev
//      Description     :   printing reverse table of input number                     
//      Input           :   integer
//      Output          :   integr
//      Author          :   Wared Arjun Ashok
//      Date            :   18/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
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

    TableRev(iValue);

    return 0;
}
