/*
Name:Yama Charan Teja Reddy
Date:18/01/2023
Description:C program to implement itoa function
Sample Execution:
Test Case 1:
Enter the number : 1234
Integer to string is 1234

Test Case 2:
Enter the number : -1234
Integer to string is -1234

Test Case 3:
Enter the number : +1234
Integer to string is 1234

Test Case 4:
Enter the number : a1234
Integer to string is 0
*/
#include<stdio.h>					                                        //Header file
int itoa(int, char *);					                                        //itoa function prototype declaration
int main()
{
    int num;						                                        //Variable declaration
    char str[100];
    printf("Enter the number : ");			                                         //Asking the user to enter the number to be converted to string
    scanf("%d", &num);
    itoa(num, str);					                                         //Function call
    printf("Integer to string is %s\n", str);		                                        //Printing the converted integer number to string
}   
int get_digit(int *num)					                                        //function to get the first digit of number input
{
    int ten = 1;
    while(ten < *num)					                                        //loop to get 10^(length of num +1 )
    {
        ten = ten * 10;
    }
    ten = ten / 10;					
    int digit = (int) (*num / ten) ;			                                        //get the 1st digit
    *num = (int) (*num - (digit * ten));			                                //remove 1st digit from num
    return digit;
}
int itoa(int num, char *str)				                                        //itoa function
{
    if(num >= 0)					                                        //true if number is positive
    {
        while(num > 10)					                                        //loop till num is greater than 10
        {   
            *(str++) = get_digit(&num) + '0';		                                        //assign coresponding ascii char of digit into str and increment str pointer
        }
        *str = num + '0';				                                        //assign last digit at last
    }
    else
    {
        *(str++) = 45;					                                        //assign 1st char as - since num is negaive and increment str pointer
        num = num* - 1;					                                        //making num positive
        while(num > 10)
        {
            *(str++) = get_digit(&num) + '0';
        }
        *str = num + '0';
    }
}
