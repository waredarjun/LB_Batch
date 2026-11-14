#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
///////////////////////////////////////////////////
//
//  Function Name   :   Addition 
//  Input           :   Integer, Integer 
//  Output          :   Integer
//  Description     :   Check Even Odd
//  Date            :   14/11/2026
//  Author          :   Arjun Ashok Wared
//
///////////////////////////////////////////////////
bool CheckEven(int iNo)
{
    if((iNo % 2) == 0) //business logic
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue); 

    if(bRet == true)
    {
        printf("It is Even\n");
    }
    else
    {
        printf("It is Odd\n");
    }

    return EXIT_SUCCESS;
}