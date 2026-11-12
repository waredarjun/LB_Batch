#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////
//
//  Function Name   : checkNumber
//  Description     : checking number positive or negative 
//  Input           : Integer
//  Output          : string
//  Author          : Wared Arjun Ashok
//  Date            : 12/11/2026
//  
///////////////////////////////////////////////
void checkNumber(int iValue)
{
    if(iValue>0)
    {
        printf("Number is positive");
    }
    else if (iValue<0)
    {
        printf("Number is negetive");
    }
    else
    {
        printf("number is zero");
    }
    
}
int main()
{
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    checkNumber(iValue);

    return EXIT_SUCCESS;
}