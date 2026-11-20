#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//
//      Function Name   :   main()
//      Description     :   accept name from user and return that name                     
//      Input           :   string
//      Output          :   string
//      Author          :   Wared Arjun Ashok
//      Date            :   20/11/2026
//
//
//
//  
////////////////////////////////////////////////////////////////////
int main()
{
    char Name[30];

    printf("Please enter full name: ");
    fgets(Name, sizeof(Name), stdin);

    printf("Your name is %s", Name);

    return 0;
}




