#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////
//
//  Function Name   : FindGreter
//  Description     : finding gretor numbre outof two number 
//  Input           : Integer integer
//  Output          : string
//  Author          : Wared Arjun Ashok
//  Date            : 12/11/2026
//  
///////////////////////////////////////////////
void FindGreater(int iFirst,int iSecond)
{
    if(iFirst>iSecond)
    {
        printf("first number gretor");
    }
    else if (iSecond>iFirst)
    {
        printf("secound number is gretor");
    }
    else
    {
        printf("both equal");
    }
    
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter two number : ");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1,iValue2);
    
    return EXIT_SUCCESS;
}