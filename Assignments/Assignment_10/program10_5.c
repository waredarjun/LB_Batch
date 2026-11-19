
#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   SquarMeter
//      Description     :   convert area in square feet into square meter                     
//      Input           :   integer 
//      Output          :   integer
//      Author          :   Wared Arjun Ashok
//      Date            :   19/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
double SquareMeter(int iValue)
{
    double dMeter = 0.0;

    dMeter = iValue * 0.092903;

    return dMeter;
}

////////////////////////////////////////////////////////////////
//                      
//      Entery point of the Application
//
////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf\n", dRet);

    return 0;
}
