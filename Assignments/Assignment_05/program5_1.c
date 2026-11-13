/*find the greatest of three numbers*/
#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////
//  
//  Function Name   :   FindGreatest
//  Description     :   Showing gretest number from
//                      giving three number
//  Input           :   Integer Integer Integer                    
//  Output          :   String                    
//  Author          :   Arjun Ashok Wared                    
//  Date            :   13/11/2026
//
/////////////////////////////////////////////////

void FindGreatest(int iFirst, int iSecound, int iThird)
{
    if(iFirst>= iSecound && iFirst >= iThird)
    {
        printf("%d is greatest",iFirst);
    }
    else if (iSecound>=iFirst&&iSecound>=iThird)
    {
        printf("%d is greatest",iSecound);
    }
    else
    {
        printf("%d is greatest",iThird);
    }
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    printf("Enter number : ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
    
    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}