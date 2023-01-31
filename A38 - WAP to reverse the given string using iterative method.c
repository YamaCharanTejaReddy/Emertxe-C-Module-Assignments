/*
Name:Yama Charan Teja Reddy
Date:02/01/2023
Description:C program to reverse a string using iteration method
Sample Execution:
Enter any string : Charan Teja Reddy
Reversed string is yddeR ajeT narahC
*/
#include<stdio.h>                                                               //Header files
#include<string.h>  
void reverse_iterative ( char str[] )                                           //Function for reversing the string
{  
    int i, len, temp;                                                           //Variable declaration
    len = strlen (str);                                                         //Calculating string length
    for ( i = 0; i < len / 2; i++ )                                             //Reversing the every character of the string
    {  
        temp = str[i];      
        str[i] = str[ len - i - 1 ];  
        str[ len - i - 1 ] = temp;  
    }  
} 
int main()
{
    char str[30];                                                               //Declaring the character array
    printf("Enter any string : ");
    scanf("%[^\n]", str);                                                       //Asking the user to enter the string to be reversed
    reverse_iterative(str);                                                     //Calling the reverse function
    printf("Reversed string is %s\n", str);                                     //Printing the reversed string
}       
