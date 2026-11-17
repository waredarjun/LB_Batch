/*Calculate Electricity Bill*/
/*
        Step 1  :   Understand the problem statement
        Step 2  :   Write the algorithm
        Step 3  :   Decide the programming language
        Step 4  :   Write the program
        Step 5  :   Test the Program
    
*/

////////////////////////////////////////////////////////////////
//
//
//      Step1   :   Accept the number of electricity units consumed
//                  and calculate the total bill using the following
//                  slab-wise rates. Each slab rate applies only to
//                  units within that slab.
//  
//
////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////
//
//
//      Step 2  :   Write the algorithm
//      
/*              START
                    Accept the number of electricity units consumed
                    from user create a function for calculate 
                    electricity bill apply filter for below condition
                    --------------------------------------
                    units consumed      Rate
                    --------------------------------------
                    First 100 units     5rupees per units
                    Next 100 units      7rupees per units
                    Above 200 units     10rupees per units
                    Negetive unit       Invalid input
                    --------------------------------------
            
*/  
//  
////////////////////////////////////////////////////////////////

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
//      Function Name   :   CalculateElectricityBill
//      Description     :   function to calculate electricity bill                      
//      Input           :   integer
//      Output          :   Integer
//      Author          :   Wared Arjun Ashok
//      Date            :   31/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
void CalculateElectricityBill (int iUnits)
{
    float fBill = 0.0f;

    
    if(iUnits < 0 )     //check negative unit 
    {
        printf("Invalid input\n");
        return;
    }
    if(iUnits <= 100)
    {
        fBill = iUnits * 5.0f;
    }
    else if (iUnits <= 200)
    {
        fBill = (100 * 5.0f) + ((iUnits - 100) * 7.0f);
    }
    else
    {
        fBill = (100 * 5.0f) + (100 * 7.0f) + ((iUnits - 200) * 10.0f);
    }
    printf("Bill = %0.02f\n",fBill);
    
}




////////////////////////////////////////////////////////////////
//                      
//      Entery point of the Application
//
////////////////////////////////////////////////////////////////
int main()
{
    int iUnits = 0;

    printf("Enter consumed unit : ");
    scanf("%d",&iUnits);    //input

    CalculateElectricityBill(iUnits);   //function calling


    return EXIT_SUCCESS;
}



////////////////////////////////////////////////////////////////
//
//
//      Step 5:Test the Program
//  
//      Tested test Cases
//      ----------------------------------------
//      Input(Units)        Output       
//      ------------------------------------------
//      100                 500.00
//      101                 507.00
//      201                 1220.00
//      -100                Invalid input
//
//
////////////////////////////////////////////////////////////////