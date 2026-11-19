/*
accept single digit number from user and print it into word.

input: 9
output: nine

input:-3
output:three

input:12
output:invalid number
*/


#include<stdio.h>
////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   Display
//      Description     :   print digit into word                     
//      Input           :   integer
//      Output          :   string
//      Author          :   Wared Arjun Ashok
//      Date            :   18/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        printf("Zero\n");
    }
    else if(iNo == 1)
    {
        printf("One\n");
    }
    else if(iNo == 2)
    {
        printf("Two\n");
    }
    else if(iNo == 3)
    {
        printf("Three\n");
    }
    else if(iNo == 4)
    {
        printf("Four\n");
    }
    else if(iNo == 5)
    {
        printf("Five\n");
    }
    else if(iNo == 6)
    {
        printf("Six\n");
    }
    else if(iNo == 7)
    {
        printf("Seven\n");
    }
    else if(iNo == 8)
    {
        printf("Eight\n");
    }
    else if(iNo == 9)
    {
        printf("Nine\n");
    }
    else
    {
        printf("Invalid Number\n");
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
