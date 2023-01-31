/*
Name:Yama Charan Teja Reddy
Date:05/11/2022
Description:C program to print the numbers in X format
Sample input:Enter the number: 10
Sample output:
1        10
 2      9
  3    8
   4  7
    56
    56
   4  7
  3    8
 2      9
1        10
*/

#include <stdio.h>					                                            //stdio.h header file
int main ()					            	                                    //Start of main
{
    int i, j, num;					                                            //Initalizing the rows,columns,number to be given by the user
    printf("Enter the number: ");			                                           //Asking the user to give the desired input number to print its X format 
    scanf("%d", &num);					                                           //Accessing the user given number
    for(i = 1; i< = num; i++)					                                   //Outer for loop for rows
    {
	for(j = 1; j <= num; j++)				                                  //Inner for loop for columns
	{
	    if(i == j)					                                          //When the row and column number is equal then
	    {
		printf("%d", i);				                                  //Print the row number
	    }
	    else if(i + j - 1 == num)				                                 //When the result of sum of row and column number - 1 is equal to number given by the user then
	    {
		printf("%d", j);				                                   //Print the column number
	    }
	    else
	    {
		printf(" ");				                                            //If above all conditions are not satisfied then print " " (space)
	    }
	}
	printf("\n");					                                            //Jump to next line 
    }
    return 0;
}							                                           //End of main
