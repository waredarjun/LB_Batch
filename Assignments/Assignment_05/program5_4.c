/*Check Divisibility by 3 and 5*/
#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////
//  
//  Function Name   :   CheckMultipleDivisibility
//  Description     :   Function use for identifing 
//                      number is divissible or not
//                      by 3 and 5
//  Input           :   Integer                     
//  Output          :   String                    
//  Author          :   Arjun Ashok Wared                    
//  Date            :   13/11/2026
//
/////////////////////////////////////////////////
void CheckMultipleDivisibility(int iValue)
{
    if(iValue % 3 ==0 && iValue % 5 ==0)
    {
        printf("Divisible by both");
    }
    else if (iValue%3 == 0)
    {
        printf("Divisible by 3 only");
    }
    else if (iValue%5 == 0)
    {
        printf("Divisible by 5 only");
    }
    else
    {
        printf("Not divisible by either 5 nor 3");
    }
    
    
}
int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);
    return EXIT_SUCCESS;
}