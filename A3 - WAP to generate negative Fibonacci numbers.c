/*
Name:Yama Charan Teja Reddy
Date:05/11/2022
Description:C program to print the negative fibonacci series based on the input given by the user
Sample input:Enter a number: -240
Sample output:

0 1 -1 2 -3 5 -8 13 -21 34 -55 89 -144 233
*/

#include <stdio.h>				                                       //stdio.h header file
int main()					                                             //Start of main
{
    int first = 0, second = 1, diff = 0, n;		        	         //Initializing the variables
    printf("Enter a number: ");			        	                   //Asking the user to enter the number to generate the negative fibonacci series
    scanf("%d", &n);				                                     //Accessing the given number by the user
    printf("\n");				                                         //Jump to next line
    if (n < 0)					                                         //If condition loop to do below operations when n>0 condition is satisfied
    {
        printf("%d %d", first, second);		       		             //Printing the first and second variables as initiated above
        diff = first - second;			                             //Storing the diff value of first and second variable into a variable called "diff"
        while(diff <= -n && diff >= n)				                   //Using while loop to do the below operations of while loop when the condition of diff<=-n and diff>=n is satisfied
        {
            printf(" %d",diff);			                             //Printing the difference value for each and every iteration upto when diff<=-n and diff>=n
            first=second;
            second=diff;
            diff=first-second;
        }
        return 0;				                                         //Returning when the while condition is not satisfied
    }
    else if (n==0)
    {
        printf("0");				                                    //Printing "0" when the given value of number by the user is "0"
    }
    else					                                              //If the above all conditions are not met then
    {
        printf("Invalid input");		                            //Printing the message as Invalid input
    }
    return 0;
}						             
