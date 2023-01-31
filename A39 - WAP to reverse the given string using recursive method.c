/*
Name:Yama Charan Teja Reddy
Date:02/01/2023
Description:C program to reverse the string using recursive method
Sample Execution:
Enter any string : Charan Teja Reddy
Reversed string is yddeR ajeT narahC
*/
#include<stdio.h>                                                               //Header files
#include<string.h>                                                                  
void reverse(char [], int, int);                                                //reverse function prototype declaration
int main()
{
    char str[30];                                                               //Declaring the character array of size 30
    int len;
    printf("Enter any string : ");
    scanf("%[^\n]", str);                                                       //Asking the user to enter the string to be reversed
    len = strlen ( str );                                                       //Calculating the string length
    reverse( str, 0, len - 1 );                                                 //Function call
    printf("Reversed string is %s\n", str);                                     //Printing the reversed string 
    return 0;
}
void reverse(char str[], int ind, int len)                                      //reverse function
{
    char temp;                                                                  //Declaring a temp variable of type char
    temp = str[ ind ];                                                          //Functionality for reversing the string
    str[ ind ] = str[ len - ind ];
    str[ len - ind ] = temp;
    if ( ind == len / 2 )
    {
        return;
    }
    reverse( str, ++ind, len );                                                 //Recursive function calling
}
