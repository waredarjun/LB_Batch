#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   CircleArea
//      Description     :   calculate circle area                     
//      Input           :   integer
//      Output          :   integer
//      Author          :   Wared Arjun Ashok
//      Date            :   19/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

////////////////////////////////////////////////////////////////
//                      
//      Entery point of the Application
//
////////////////////////////////////////////////////////////////
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %0.02f\n", dRet);

    return 0;
}
