/*Calculate Employee Bonus*/

/*
        Step 1  :   Understand the problem statement
        Step 2  :   Write the algorithm
        Step 3  :   Decide the programming language
        Step 4  :   Write the program
        Step 5  :   Test the Program
    
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//      Step 1  :   Understand the problem statement
//                  "Accept am employee's monthly salary and completed years of service. calculate the bonus using these rules:more than 10 years of service earns a bonus of
//                  15% of monthly salary; 5 to 10 years earns 10% ; less than 5 years earn 5%. salary must be positive and years of service cannot be negative"
//  
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//      Step 2  :   Write the algorithm
//      
/*              START
                    accept salary and year of service from employee and add bonus according to service year 
                    using function CalculateBonus.
                    
            
*/  
//  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//      Step 3  :   Decide the programming language
//                  We select C programming 
//  
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//      Step 4  :   Write the program
//        
//  
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   CalculateBonus
//      Description     :   adding bonus according to year of service.                      
//      Input           :   integer integer
//      Output          :   integer
//      Author          :   Wared Arjun Ashok
//      Date            :   17/11/2026
//
//
//
//  
/////////////////////////////////////////////////////////////////

void CalculateBonus(float fSalary, int iYears)
{
    
    float fBonus;

    if (fSalary <= 0)
    {
        printf("Invalid Salary");
    }
    else if (iYears < 0)
    {
        printf("Invalid Years of Service");
    }
    else if (iYears > 10)
    {
        fBonus = fSalary * 15 / 100;
        printf("Bonus = %.2f", fBonus);
    }
    else if (iYears >= 5)
    {
        fBonus = fSalary * 10 / 100;
        printf("Bonus = %.2f", fBonus);
    }
    else
    {
        fBonus = fSalary * 5 / 100;
        printf("Bonus = %.2f", fBonus);
    }

}


////////////////////////////////////////////////////////////////
//
//      Entery point of the Application
//
////////////////////////////////////////////////////////////////


int main()
{

    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}


////////////////////////////////////////////////////////////////
//
//
//      Step 5  :   Test the Program
//  
//                  Tested test Cases
//                  ------------------------------------------
//                  salary      service year    bonuus          
//                  ------------------------------------------
//                  30000       12              4500.00                             
//                  20000       7               2000.00              
//                  10000       2               500.00                  
//    
//
//
//
////////////////////////////////////////////////////////////////

