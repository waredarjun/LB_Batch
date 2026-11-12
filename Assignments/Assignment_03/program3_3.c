#include<stdio.h>
/////////////////////////////////////////////
//
//  Function Name: DisplayEvenFactor
//  Description: Calculate and Display Factor 
//  Input : Integer
//  Output : Integer
//  Author : Wared Arjun Ashok
//  Date : 03/11/2026
//  
///////////////////////////////////////////////
void DisplayEvenFactor(int iNo)
{
    int i = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    // Loop runs up to iNo / 2 to find proper factors
    for(i = 1; i <= iNo / 2; i++)
    {
        // Check if 'i' is a factor of 'iNo' AND if 'i' is an even number
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);
    
    // Call the function passing the user input
    DisplayEvenFactor(iValue);
    
    return 0;
}