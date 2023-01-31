/*
Name:Yama Charan Teja Reddy
Date:23/11/2022
Description:C program to implement own ispunct () function
Sample input:Enter the character: #
Sample output:Entered character is punctuation character
*/
#include<stdio.h>							                    //standard library
#include<ctype.h>							                   //ctype library
int main ()
{
    char ch;											
    printf("Enter the character: ");
    scanf("%c", &ch);							                  //scaning for input
    if( ispunct(ch) )							                 //ispunct() function to check whether the given input is character or not
	printf("Entered character is punctuation character");		                //if the above condition is true then this message is printed
    else
	printf("Entered character is not punctuation character");	                //if the above condition is false then this message is printed
    return 0;
}
