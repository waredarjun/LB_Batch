#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////
//
//  Function Name   : checkEvenOdd
//  Description     : function checking a number 
//                    even or odd 
//  Input           : Integer
//  Output          : Integer
//  Author          : Wared Arjun Ashok
//  Date            : 12/11/2026
//  
///////////////////////////////////////////////
void checkEvenOdd(int iValue)
{
    if(iValue%2==0)
    {
        printf("number is even");
    }
    else if (iValue%2 != 0)
    {
        printf("odd number");
    }
    else{
        printf("invalid input");
    }    

}
int main()
{
    int iValue = 0;
    printf("enter a number : ");
    scanf("%d",&iValue);
    checkEvenOdd(iValue);

    return EXIT_SUCCESS;
}