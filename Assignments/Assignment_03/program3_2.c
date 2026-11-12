#include <stdio.h>

/////////////////////////////////////////////
//
//  Function Name: DisplayFactor
//  Description: Calculate and Display Factor 
//  Input : Integer
//  Output : Integer
//  Author : Wared Arjun Ashok
//  Date : 03/11/2026
//  
///////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;
    
    // Upgraded to handle negative numbers
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    // Loop runs up to half of the number
    for(i = 1; i <= iNo / 2; i++)
    {
        // Check if 'i' is a factor AND 'i' is even
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d\t", i); 
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);
    
    DisplayFactor(iValue);
    
    return 0;
}