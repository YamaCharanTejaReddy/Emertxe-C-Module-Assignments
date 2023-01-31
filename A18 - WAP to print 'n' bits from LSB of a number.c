/*
Name:Yama Charan Teja Reddy
Date:24/11/2022
Description:C program to print 'n' bits from LSB of a number
Sample input:
Enter the number: 50
Enter number of bits: 12
Sample output:Binary form of 50: 0 0 0 0 0 0 1 1 0 0 1 0
*/
#include <stdio.h>					                                             //Standard library header file
int print_bits(int, int);				                                    	     //Prototype declaration
int main()						                                             //Caller function main
{
    int num, n, res = 0;					                                    //Declaring the variables inside function main
    printf("Enter the number: ");				                                    //Asking the user to give the number
    scanf("%d", &num);
    printf("\n");	
    printf("Enter number of bits: ");			                            	            //Asking the user to enter the number of bits to be printed as output
    scanf("%d", &n);			
    printf("\n");	    
    printf("Binary form of %d: ", num);				                                     //Printing the binary format of the given number
    res = print_bits(num, n);					                                    //Getting the result from the called function into a variable called "res"
}
int print_bits(int num, int n)				                                            //Called function
{
    int res, i, j;					                                       	    //Declaring the variables
    for( i = n - 1 ; i >= 0 ; i -- )						                     //For loop to print the binary equivalent of the given number 
    {
	j = num >> i;					                                            //Right shifting the number "i" of times
	if( j & 1 )							                            //If Bitwise AND operation of the every right shifted bit with 1 gives 1 then that "1" is printed
	    printf("1 ");
	else
	    printf("0 ");					                                   //If the above conditon of (j&1) is false then print "0"
    }
    return res;							                                   //Return to the called function
}
