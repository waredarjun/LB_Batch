
#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   RectArea
//      Description     :   calculate area of rectangle                     
//      Input           :   integer integer
//      Output          :   integer
//      Author          :   Wared Arjun Ashok
//      Date            :   19/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

////////////////////////////////////////////////////////////////
//                      
//      Entery point of the Application
//
////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is %lf\n", dRet);

    return 0;
}
