/*
Name:Yama Charan Teja Reddy
Date:05/11/2022
Description:C program to check if the number is perfect or not
Sample input:Enter a number: 8128
Sample output:

Yes, entered number is perfect number
*/

#include <stdio.h>								                //stdio.h header file
int main()									                //Start of main
{				
    int n, i, sum = 0;								               //Initializing the variable
    printf("Enter a number: ");							              //Asking the user to give the desired number to find whether it is perfect number or not
    scanf("%d", &n);								             //Accessing the number given by the user
    printf("\n");								             //Jump to next line
    if(n > 0)									             //If condition to do below opertaions when the given number is positive
    {
	for(i = 1; i <= n; i++)							            //Start of for loop
	{
	    if(n % i == 0)								    //Checking for factors of given number
	    {
		sum = sum + i;							            //Summing all the factors of the given number and storing it into a variable called "sum"
	    }
	}
	if( sum / 2 == n)								   //When the stored value in sum variable divided by 2 is equal to given number then below message is printed
	{
	    printf("Yes, entered number is perfect number");
	}
	else
	{
	    printf("No, entered number is not a perfect number");		   	  //If the above condition of sum/2==n is not satisfied then below message is printed
	}
    }
    if(n < 0)									         //If the given user number is a negative number then below message is printed
    {
	printf("Error : Invalid Input, Enter only positive number");
    }
    return 0;
}										         //End of main
