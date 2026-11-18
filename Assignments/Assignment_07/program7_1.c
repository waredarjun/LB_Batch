/*
        input   :   5
        output  :   $   *   $   *   $   *   $   *   $   *
*/
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
//      Step1   :   Write a program which accept number from user and print that number of $ & * on screeen.
//  
//
////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////
//
//
//      Step 2  :   Write the algorithm
//      
/*                  START
                    in main function, i create a veriable iValue for getting input from user
                    and apply filter for charector input,
                    i create a function name is 'Pattern' and inside function apply loop for printing "$  *   $   *   $   *" this type pattern.
                    function return value is void, that's why i do not write return world.
                    i use datatype integer which give variable name is "iNo". 
                    
            
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

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   Patter
//      Description     :   print "$    *   $   *   $   *" pattern                      
//      Input           :   integer
//      Output          :   special symbol
//      Author          :   Wared Arjun Ashok
//      Date            :   31/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
void Pattern (int iNo)
{
    if(iNo < 0) //for negative value input 
    {
        iNo = - iNo;
    }

    for(int i = 1; i <= iNo; i++)
    {
        printf("$\t*\t");
    }
    printf("\n");
}


////////////////////////////////////////////////////////////////
//                      
//      Entery point of the Application
//
////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    if(scanf("%d", &iValue) != 1)
    {
        printf("Character not valid");
    }
    Pattern(iValue);   //function calling

    return 0;
}
////////////////////////////////////////////////////////////////
//
//
//      Step 5:Test the Program
//  
//      Tested test Cases
//      ----------------------------------------
//      Input       output       
//      ------------------------------------------
//      5           $   *   $   *   $   *   $   *   $   *
//      3           $   *   $   *   $   *
//      -3          $   *   $   *   $   *
//      Abcd        character not valid
//
//
////////////////////////////////////////////////////////////////