/*
Name:Yama Charan Teja Reddy
Date:18/01/2023
Description:C program to replace each string of one or more blanks by a single blank
Sample Execution:
Charan                                     teja                                 reddy
Charan teja reddy
*/
#include<stdio.h>				               //Header files
#include<stdlib.h>
void replace_blank(char []);			               //Prototype declaration
void replace_blank(char str[])			               //Function
{
    char *p = str;				              //Declaring character pointers p,q which stores base address of the string array
    char *q = str;
    while (*p != '\0') 				             //Until when the pointer does reaches null character then while loop is executed otherwise the string is terminated with null character
    {
        if (*p != ' ' && *p != '\t') 		            //Starts while loop that will continue executing as long as the value pointed by the pointer p is not null character			
        {
            *q++ = *p++;			              //Copies the value pointed by 'p' to location pointed by 'q' and increments both pointers 'p' and 'q'
        } 
	else 					             //If the value pointed by 'p' is not space or tabspace
        {
            while (*p == ' ' || *p == '\t') 	             //Starts while loop that wlll continue executing as long as the value pointed by 'p' is space or tabspace
            {
                p++;				            //Pointer 'p' is incremented
            }
            *q++ = ' ';				            //Assigns a space to the location pointed by 'q' and increments the pointer 'q'
        }
    }
    *q = '\0';					           //Assigns null character to the location pointed by pointer 'q'
    printf("%s", str);				           //Printing the modified stirng
}
int main()
{
    char str[100];				           //Declaring the character string
    fgets(str, 100, stdin);			           //Accessing the string through fgets() function
    replace_blank(str);				          //Go to the function
}
