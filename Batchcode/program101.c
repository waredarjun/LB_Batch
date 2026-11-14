#include<stdio.h>
#include<stdlib.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    printf("Factor of %d are : \n", iNo);
    
    for(iCnt = 1 ; iCnt < iNo/2 ; iCnt++)
    {
       if((iNo % iCnt) == 0)
       {
        printf("%d\n",iCnt);
       }
    }
}

int main()
{
    int iValue = 0;
    
    printf("enter a number: \n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}

//time complexcity : O(N/2)