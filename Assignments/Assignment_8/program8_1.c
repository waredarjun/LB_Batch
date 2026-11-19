/*
write a program which accept number from user and if number is
less than 50 then print small, if it is greater than 50 and less than
100 then print medium,if it is greater than 100 then print large.

input: 75
output: mediumm

*/
#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   Number
//      Description     :   divide number in three part small,medium,large                      
//      Input           :   integer
//      Output          :   string
//      Author          :   Wared Arjun Ashok
//      Date            :   18/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else if(iNo > 100)
    {
        printf("Large\n");
    }
    else
    {
        printf("Number is 50 or 100\n");
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

    Number(iValue);

    return 0;
}