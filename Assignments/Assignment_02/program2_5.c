#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////
//
//  Function Name : chkEven
//  Description   : Accept number from user and  
//                  check even or odd
//  Input         : Integer
//  Output        : String
//  Author        : Wared Arjun Ashok
//  Date          : 31/10/2026
//
/////////////////////////////////////////////

BOOL chkEven(int iNo)
{

    //logic
    if((iNo % 2 ) == 0 )  
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;

    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = chkEven(iValue);

    if(bRet == TRUE)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }
   

    return 0;
}
