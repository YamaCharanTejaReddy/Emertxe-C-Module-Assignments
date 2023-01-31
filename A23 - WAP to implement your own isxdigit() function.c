/*
Name:Yama Charan Teja Reddy
Date:23/11/2022
Description:C program to implement own isxdigit() function
Sample input:Enter the character: A 
Sample output:Entered character is an hexadecimal digiit
*/
#include<stdio.h>							                  //standard library
#include<ctype.h>							                  //ctype library
int main ()
{
    char ch;											
    printf("Enter the character: ");
    scanf("%c", &ch);							                 //scaning for input
    if( isxdigit(ch) )							                 //isxdigit() function to check whether the given input is digit or not
	printf("Entered character is an hexadecimal digit");	                	//if the above condition is true then this message is printed
    else
	printf("Entered character is not an hexadecimal digit");	                //if the above condition is false then this message is printed
    return 0;
}

