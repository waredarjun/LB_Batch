/*Calculate Shopping Discount*/

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
//                  "Accept the total purchase amount and calculate the final payable amount after applying
//                  the folling discount. negative purchase amounts are invalid."
//  
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//      Step 2  :   Write the algorithm
//      
/*                  START
                    getiing orignal amount from user in variable fAmaount,
                    i create a function which name is "CalculateDiscount" for calculating the discount using if conditon. 
                    origanal amount is below 1000 then discount is 0%, orignal amount is between 1000 to 5000
                    then user get discount 10%, and oarignal amount is 5000 or above 5000 then user get discount 20%.


                    
                    
            
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
//      Function Name   :   CalculateDiscount
//      Description     :   for calculating discount from orignal price                      
//      Input           :   integer
//      Output          :   integer
//      Author          :   Wared Arjun Ashok
//      Date            :   17/11/2026
//
//
//
//  
/////////////////////////////////////////////////////////////////

void CalculateDiscount(float Orignalprice)
{
    float discount = 0.0f;
    float finalprice;
    if ((Orignalprice >= 1000) && (Orignalprice < 5000))    //10% discount
    {
        discount = ((Orignalprice*10)/100);
        finalprice = Orignalprice - discount;
        printf("Payable Amount = %0.02f",finalprice);       
    }
    else if (Orignalprice >= 5000)  //20% discount 
    {
        discount = ((Orignalprice*20)/100);
        finalprice = Orignalprice - discount;
        printf("Payable Amount = %0.02f",finalprice);       
    }
    else    //0% discount
    {
        finalprice = Orignalprice;
        printf("Payable Amount = %0.02f",finalprice);       
    }

}


////////////////////////////////////////////////////////////////
//
//      Entery point of the Application
//
////////////////////////////////////////////////////////////////


int main()
{

    float fAmount = 0.0f;

    printf("Enter purches amount : ");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}


////////////////////////////////////////////////////////////////
//
//
//      Step 5  :   Test the Program
//  
//                  Tested test Cases
//                  ------------------------------------------
//                  Orignal price   discount%   final price          
//                  ------------------------------------------
//                  999                 0%          999                              
//                  1000                10%         900              
//                  5000                20%         4000                  
//    
//
//
//
////////////////////////////////////////////////////////////////

