/*
Name:Yama Charan Teja Reddy
Date:23/11/2022
Description:C program to implement own islower() function
Sample input:Enter the character: C
Sample output:Entered character is not lower case alphabet
*/
#include<stdio.h>							                      //standard library
#include<ctype.h>							                     //ctype library
int main ()
{
    char ch;											
    printf("Enter the character: ");
    scanf("%c", &ch);							                    //scaning for input
    if( islower(ch) )							                    //islower() function to check whether the given input is lower case alphabet or upper case alphabet
	printf("Entered character is lower case alphabet");		                    //if the above condition is true then this message is printed
    else
	printf("Entered character is not lower case alphabet");		                   //if the above condition is false then this message is printed
    return 0;
}
