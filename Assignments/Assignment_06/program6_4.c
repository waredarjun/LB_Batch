/*Check Triangle Validity*/

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
//                  "Accept three integer values representing the lengths of the sides of a triangle.
//                  determine wheter they can form a valid triangle . all sides must be positive and the sum of any two side must be
//                  greater than the third side.."
//  
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//      Step 2  :   Write the algorithm
//      
/*              START
                    i accept three input from user and creating a function for checking triangle valid 
                    from user input, i declear function function parameter are a,b c and write a condition in "if" steatment for cheking triangle validity.
                    
            
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
//      Function Name   :   Check_valid_trigle
//      Description     :   function to show tringle is valid or not                      
//      Input           :   integer integer integer
//      Output          :   string
//      Author          :   Wared Arjun Ashok
//      Date            :   17/11/2026
//
//
//
//  
/////////////////////////////////////////////////////////////////

void Check_valid_trigle(int a,int b,int c)
{
        if (a > 0 && b > 0 && c > 0 &&
        (a + b > c) &&
        (a + c > b) &&
        (b + c > a))
        {
            printf("Valid Triangle");
        }
        else
        {
            printf("Invalid Triangle");
        }
    

}


////////////////////////////////////////////////////////////////
//
//      Entery point of the Application
//
////////////////////////////////////////////////////////////////


int main()
{

    int hypoteneous = 0;
    int base = 0;
    int adgecent = 0;

    printf("Enter hypoteneou: ");
    scanf("%d",&hypoteneous);
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter adgecent: ");
    scanf("%d",&adgecent);

    Check_valid_trigle(hypoteneous,base,adgecent);


    return EXIT_SUCCESS;
}


////////////////////////////////////////////////////////////////
//
//
//      Step 5  :   Test the Program
//  
//                  Tested test Cases
//                  ------------------------------------------
//                  input1   input2   input3    out put          
//                  ------------------------------------------
//                   3          4       5       valid tringle                                             
//                   1          2       3       invalid tringle                                      
//                   0          4       5       invalid tringle               
//    
//
//
//
////////////////////////////////////////////////////////////////

