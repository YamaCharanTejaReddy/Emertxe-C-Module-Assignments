/*
Name:Yama Charan Teja Reddy
Date:24/11/2022
Description:C program to get 'n' bits from given position of a number
Sample input:
Enter the number: 15
Enter number of bits: 3
Enter the pos: 5
Sample output:
Result = 1
*/

#include<stdio.h>					                                     //standard library header file
int get_nbits_from_pos(int, int, int);				                            //Prototype declaration
int main()						                                    //Caller function main
{
    int num, n, pos, res = 0;					                            //Declaring the type of variables
    printf("Enter the number: ");			                                    //Asking user to give the number
    scanf("%d", &num);
    printf("\n");
    printf("Enter number of bits: ");			                            	   //Asking the number of bits to be got
    scanf("%d", &n);
    printf("\n");
    printf("Enter the pos: ");					                           //Asking the position from where the number of bits should be got
    scanf("%d", &pos);
    printf("\n");
    res = get_nbits_from_pos(num, n, pos);		                            	   //Result from the called function is stored into a variable called "res"
    printf("Result = %d\n", res);				                           //Printing the result
}
int get_nbits_from_pos(int num, int n, int pos)			                           //Called function
{
    int shifts, mask, res = 0;				                                    //Declaring the variables inside the called function
    shifts = ( pos - n ) + 1;						                    //Number of shifts to be taken place
    mask =(( 1 << n ) - 1 ) << shifts;				                            //Defining the mask
    res = ( num & mask ) >> shifts;				                            //Obtaining the bits
    return res;							                            //Return to caller function main
}
