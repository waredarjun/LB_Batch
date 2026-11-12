/*check divisibility by 5*/
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////
//
//  Function Name   : CheckDivisibility
//  Description     : cheking number is divisible
//                    by 5 or not 
//  Input           : Integer
//  Output          : sting
//  Author          : Wared Arjun Ashok
//  Date            : 12/11/2026
//  
///////////////////////////////////////////////
void CheckDivisibility(int iValue)
{
    if(iValue%5==0)
    {
        printf("divisible by 5");
    }
    else if (iValue%5 != 0)
    {
        printf("not divisible by 5");
    }
    else
    {
        printf("invalid input");
    }
}
int main()
{
    int iValue = 0;
    printf("enter a number : ");
    scanf("%d",&iValue);


    return EXIT_SUCCESS;
}