/*
Name:Yama Charan Teja Reddy
Date:31/01/2023
Description:C program to implement the atoi function
Sample input:Enter a numeric string : --1234                                                 
Sample output:String to integer is 0  
*/
#include<stdio.h>
#include<stdlib.h>
int my_atoi ( const char* s )                                                   //atoi function
{
    int result = 0;                                                             //Declaring and initializing the variables
    int sign = 1;
    if ( *s == '-' || *s  == '+' )                                              //when character is '+' or '-' then below instructions are performed
    {
        sign = 1 - 2 * ( *s == '-' );
        s ++;                                                                   //constant character pointer 's' is incremented
    }
    while ( *s >'0' && *s < '9')                                                //When the character pointed by the const char pointer 's' is between the range from 0 to 9
    {
        result = result * 10 + *s - '0';                                        
        s ++;
    }
    return sign * result;                                                       //Returning the result along with it's sign
}
int main() 
{
    char s[20];                                                                 //Declaring the charatcer array
    printf("Enter a numeric string : ");                                        
    scanf("%s", s);                                                             //Asking the user to give the input 
    my_atoi(s);
    printf("String to integer is %d\n", my_atoi(s));                            //Printing the result
}
