/*
Name: Y.Charan Teja Reddy
Date: 25/12/2022
Description: WAP to implement getword function
Sample Execution: 
Enter the string : Welcome to Emertxe
You entered Welcome and the length is 7
*/
#include <stdio.h>
#include <string.h>
int getword( char *str );  						                                //Function declaration 
int main()
{  
    int length = 0 , i = 0;   						                            //Variable declaration and initialisation
    char str[100];   						                                   //declaring an array of characters
    printf("Enter the string : ");   
    scanf(" %[^\n]", str );      				                            	//Reading the string from user until new line
    length = getword( str );  					                            	//Function call
    printf("You entered %s and the length is %d\n", str, length );                             //Printing the first word and length of that word
    return 0;
}
int getword( char *str ) 						                        //Function defination
{
    int count = 0; 						 	                       //Variable declaration and initialisation
    while (*str) 
    {
        if( *str++ == ' ' )  						                       //In string when space is found  then stops counting
        {
            break;
        }
        else
        count ++; 						 	                      // incrementing the count 
    }
    *str = '\0';   						 	                      //terminating with the null character
    return count;  
}
