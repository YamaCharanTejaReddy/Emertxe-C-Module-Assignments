//Name:Yama Charan Teja Reddy
//Date:21/10/2022
//Description:C program to check whether the given number by the user is odd or even or zero
//Sample input:Enter the value of 'n' : -11
//Sample output:-11 is negative odd number
#include<stdio.h>      									//stdio.h header file
int main()                                                                      	//start of program
{
	int num;                                                                    	//declaring the input number by the user as an integer
	printf("Enter the value of 'n' : ");			                        //asking the user to give a number to check whether the number is odd or even or zero
	scanf("%d", &num);
	if(num == 0)        							        //checking whether the given number by the user is zero or not
	{
		printf("%d is neither odd nor even\n",num);                             //printing the number is neither odd nor even
	}
	else if(num < 0 && (num%2) != 0)				                //checking whether the given number is less than zero and its remainder is not zero when divided by 2
	{
		printf("%d is negative odd number\n",num);                              //printing the number is negative odd number along with negative sign
	}
	else if(num > 0 && (num%2) != 0)                                            	//checking whether the given number is greater than zero and its remainder is not zero when divided by 2
	{
		printf("%d is positive odd number\n",num);                              //printing the number is positive odd number 
	}
	else if(num < 0 && (num%2) == 0)                                            	//checking whether the given number is less than zero and its remainder is equal to zero when divided by 2
	{
		printf("%d is negative even number\n",num);                             //printing the number is negative even number along with negative sign
	}
	else if(num >0 && (num%2) == 0)                                             	//checking whether the given number is greater than zero and its remainder is equal to zero when divided by 2
	{
		printf("%d is positive even number\n",num);                             //printing the number is positive even number 
	}
	return 0;									//end of program
}
