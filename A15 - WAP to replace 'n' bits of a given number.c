/*
Name:Yama Charan Teja Reddy
Date:24/11/2022
Description:C program to replace 'n' bits of a given number
Sample input:
Enter the number: 43
Enter the number of bits: 4
Enter the value: 54
Sample output:Result = 38
*/

#include<stdio.h>					                                     //standard library header file
int replace_nbits(int, int, int);		                                             //prototype declaration

int main()
{
    int num, n, val, res = 0;
    
    printf("Enter the number: ");			                                    //Asking user to enter the number
    scanf("%d", &num);
    printf("\n");
    printf("Enter the number of bits: ");		                                    //Asking user to enter the number of bits to be replaced
    scanf("%d", &n);
    printf("\n");
    printf("Enter the value: ");			                                    //Asking the user to enter the value
    scanf("%d", &val);
    printf("\n");
    res = replace_nbits(num, n, val);			                                    //Calling function
    printf("Result = %d\n", res);			                                    //Printing the result
}
int replace_nbits(int num, int n, int val)		                                    //Called function
{
    int clear, get, res;					                             //Declaring the type of variables used in the called function
    clear = num & (~ (( 1 << n ) - 1) );				                    //Result of clear bit operation into a variable
    get = val & (( 1 << n ) - 1 );				                            //Result of get bit operation into a variable
    res = clear | get;				                                            //Result after replacing the "n" bits in the given number through bitwise OR operation
    return res;						                                    //Return value of "res" variable to caller function
}
