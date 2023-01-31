/*
Name:Yama Charan Teja Reddy
Date:27/11/2022
Description:C program to print the factorial of a number using recursion with storage classes
Sample input:Enter the value of N : 14
Sample output:Factorial of the given number is 87178291200
*/
#include <stdio.h>

int main()
{
    static int flag=1; 								     	  //Using static flag to avoid occurence of struck ininfinte loop
    static int num;
    static unsigned long long int fact = 1; 
    if(flag)
    {
        printf("Enter the value of N : ");
        scanf("%d", &num);
        flag = 0;								         //Making flag zero to avoid execution of this loop other time
    }
    if( num == 0 )
    printf("Factorial of the given number is 1");
    else if( num < 0 )
    printf("Invalid Input");
    else
    {
        fact = ( fact * num -- ) % 1099511627775;    					 //Dividing with largest prime number (2^40)-1 and taking the remainder
        if( num < 1)
        printf("Factorial of the given number is %lld ",fact); 			        //Printing factorial
        else
        main();								               //Recursive call;
    }
}
