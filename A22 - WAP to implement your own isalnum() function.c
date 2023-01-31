/*
Name:Yama Charan Teja Reddy
Date:23/11/2022
Description:C program to implement your own isalnum() function
Sample input:Enter the character: |
Sample output:Entered character is not alphanumeric character
*/
#include<stdio.h>							                   //standard library
#include<ctype.h>							                   //ctype library
int main ()
{
    char ch;											
    printf("Enter the character: ");
    scanf("%c", &ch);							                  //scanning for input
    if( isalnum(ch) )							                 //islanum function to check whether the given input is character or not
	printf("Entered character is alphanumeric character");		                //if the above condition is true then this message is printed
    else
	printf("Entered character is not alphanumeric character");	                //if the above condition is false then this message is printed
    return 0;
}
