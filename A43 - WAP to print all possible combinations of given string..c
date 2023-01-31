/*
Name:Yama Charan Teja Reddy
Date:18/01/2023
Description:C program to print the combinations of the given strings
Sample Execution:
Enter a string: abcd
abcd
abdc
acbd
acdb
adcb
adbc
bacd
badc
bcad
bcda
bdca
bdac
cbad
cbda
cabd
cadb
cdab
cdba
dbca
dbac
dcba
dcab
dacb
dabc
*/
#include<stdio.h>
#include<string.h>
void combination(char *, int, int );   						                    //Function prototype for string combination,string'lengthswap
int my_strlen(char*);
void swap(char *, char*);
int main()

{
    char str[100];   								                   //string declaration with size
    int n;    									                   //Variable declaration
    int flag = 0;
    printf("Enter a string: ");							                   //Asking the user to given string as input
    scanf("%100[^\n]", str);
    for(int i = 0; str[i] != '\0'; i++)  					                    //Loop for string validation
    {
        for(int j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])						                   //If there is any repeated characters in string the error message is printed
            {
                flag++;
                printf("Error: please enter distinct characters.");
                break;
            }
        }
    }
    if(flag == 0)
    {
        n = my_strlen(str);   							                 //Function call for string length
        combination (str, 0, n-1); 						                 //Function call for string combination
    }
    return 0;
}
int my_strlen(char* str)							                //Function to find the string length
{
    int i,len = 0;
    for(i = 0; str[i] != '\0'; i++)  						                //Loop to find the length of string
    {
        len++;
    }
    return len;
}
void combination(char *str, int ind, int len )				
{
    int i;
    if(ind == len)
    {
        if(strcmp(str, "abc") != 0)    						                //Comparing all the combination strings with given string for non repeatation of combination strings
        {
            printf("%s\n", str); 	 					                //To Print the string combination
        }
    }
    else
    {
        for(i = ind; i <= len; i++)
        {
            swap ( ( str + ind ), ( str + i ) );   				                // To swap the character of string
            combination ( str, ind + 1, len );  				                //Recursive funtion
            swap ( ( str + ind ), ( str + i ) ); 				                //To swap the character of string
        }
    }
}
void swap(char *ind, char *len)							               //Function for swapping 
{
    char temp;
    temp = *ind;  								                //swap Logic
    *ind = *len;
    *len = temp;
}
