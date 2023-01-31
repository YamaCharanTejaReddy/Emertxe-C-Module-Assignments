/*
Name:Yama Charan Teja Reddy
Date:24/11/2022
Description:C program to toggle 'n' bits from given position of a number
Sample input:
Enter the number: 15
Enter number of bits: 2
Enter the pos: 2
sample output:
Result = 9
*/
#include<stdio.h>						                                        //Standard library header file
int toggle_nbits_from_pos(int, int, int);		                            			//Prototype declaration
int main()							                                        //Caller function main
{
    int num, n, pos, res = 0;					                                	//Declaring the type of variables
    printf("Enter the number: ");			                                		//Asking user to give the number
    scanf("%d", &num);
    printf("\n");
    printf("Enter number of bits: ");			                            			//Asking the number of bits to be got
    scanf("%d", &n);
    printf("\n");
    printf("Enter the pos: ");					                                	//Asking the position from where the number of bits should be got
    scanf("%d", &pos);
    printf("\n");
    res=toggle_nbits_from_pos(num, n, pos);		                            			//Result from the called function is stored into a variable called "res"
    printf("Result = %d\n", res);				                                	//Printing the result
}
int toggle_nbits_from_pos(int num, int n, int pos)	                        			//Called function
{
    int shifts, mask, res = 0;					                                	//Declaring the variables inside the called function
    shifts = ( pos - n ) + 1;						                            	//Defining the number of shifts
    mask = (( 1 << n ) - 1) << shifts;					                        	//Defining the mask
    res = ( num ^ mask );					                                    	//Obtaining the result by the Bitwise XOR operation
    return res;    						                                        //Return to the caller function
}
