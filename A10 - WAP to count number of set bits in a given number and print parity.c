/*
Name:Yama Charan Teja Reddy
Date:06/11/2022
Description:C program to count number of set bits in a given number and print parity
Sample input:Enter the number : 16
Sample output:

Number of set bits = 1

Bit parity is Odd
*/
#include<stdio.h>
unsigned int countSetBits(unsigned int n)			        // Function to get no of set bits in binary representation of positive integer n
{
    unsigned int count = 0;				                //Initializing the count to zero
    while (n) 
    {
        count += n & 1;					                //Update the count value after finding the setbits after every iteration
        n >>= 1;
    }
    return count;
}
 
/* Program to test function countSetBits */
int main()							       //Start of main
{
    int i, setbits;						      //Initializing the variables i,setbits
    printf("\n");					              //Jump to next line
    printf("Enter the number : ");				      //Reading the input number from the user
    scanf("%d", &i);						      //Accessing the input number from the user
    printf("\n");
    printf("Number of set bits = %d", countSetBits(i));		     //Printing the number of set bits
    printf("\n");						     //Jump to next line
    setbits = countSetBits(i);					     //Storing the value of countSetBits(i) into an int variable "setbits"
    if(setbits %2 == 0)						     //Checking if the number of set bits of the given number is even or odd
    {
	printf("\n");						     //Jump to next line
	printf("Bit parity is Even");				     //If above condition is satisfied then print this message
    }
    else
    {
	printf("\n");						    //Jump to next line
	printf("Bit parity is Odd");				    //If above condition is not satisfied then print this message
    }
    return 0;							    //End of main
}							
