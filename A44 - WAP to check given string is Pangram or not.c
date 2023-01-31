/*
Name:Yama Charan Teja Reddy
Date:18/01/2023
Description:C program to check whether the given string is pangram string or not
Sample Execution:
The quick brown fox jumps over the lazy dog
The Entered String is a Pangram String
*/
#include<stdio.h>							                                 //Header files
#include<stdlib.h>
int pangram(char *);
int main()
{
    char s[100];						                                    	//Variable declaration
    int res;
    fgets(s, 100, stdin);						                                //fgets() function
    res = pangram(s);							                                //Storing the return value of "pangram" function into integer variable res
    if(res == 1)							                                //If the value in variable "res" is 1 then below message is printed
    {
        printf("The Entered String is a Pangram String\t");
    }
    else								                               //If the above condition of if statement is flase then below message is printed
    {
        printf("The Entered String is not a Pangram String");
    }
    return 0;
}
int pangram(char *s)
{   
    int i, used[26] = {0}, total = 0;					                            //Variable declaration
    for(i = 0; s[i] != '\0'; i++)					                            //loop that iterates through each character in the input string		
    {
        if('a'<= s[i] && s[i] <= 'z')				                                   //checks if the current character is a lowercase letter
        {
            total += !used[s[i] - 'a'];					                           //increments the total by 1 if the current letter has not been seen before.
            used[s[i] - 'a'] = 1;					                           //sets the current letter as used.
        }
        else if('A' <= s[i] && s[i] <= 'Z')					                   //checks if the current character is an uppercase letter.
        {
            total += !used[s[i] - 'A'];				                                  //increments the total by 1 if the current letter has not been seen before.
            used[s[i] - 'A'] = 1;						                  //sets the current letter as used.
        }
    }
    if(total == 26)							                          //checks if all 26 letters of the alphabet have been used in the input string.
    {
        return 1;						                                 //If true it returns 1.
    }
    else
    {
        return 0;							                         //Else returns 0
    }
}
