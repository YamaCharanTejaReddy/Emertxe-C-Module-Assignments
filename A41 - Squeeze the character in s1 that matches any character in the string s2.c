/*
Name:Yama Chran Tej Reddy
Date:31/01/2023
Description:C program to squeeze the character in s1 that matches any character in string s2
Sample Execution:
Enter s1: charan
Enter s2:                                                       teja            reddy
After squeeze s1: chn
*/
#include<stdio.h>
void squeeze(char s1[], char s2[])                                              //Function for squeezing
{
    int i, j, k;                                                                //Variable declarations
    for (i = k = 0; s1[i] != '\0'; i++)                                         //This line starts a for loop that iterates through each character in the first string, s1
    {
        for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++);                      //This line starts a nested for loop that checks if the current character in s1 (indicated by i) is present in the second string, s2
        if (s2[j] == '\0')                                                      //Checks if the current character in s1 is not present in the second string, s2. If it is not present, the character is added to the new string.
            s1[k++] = s1[i];                                                    //Adds the current character in s1 (indicated by i) to the new string at the position indicated by k, and then increments k.
    }
    s1[k] = '\0';                                                               //Sets the last character of the new string to the null character to indicate the end of the string.
}
int main() 
{
    char s1[100], s2[100];                                                      //Variable declaration
    printf("Enter s1: ");                                                       
    scanf("%[^\n]s", s1);                                                       //Asking user to enter the string s1
    printf("Enter s2: ");
    scanf(" %[^\n]s", s2);                                                      //Asking user to enter the string s2
    squeeze(s1, s2);                                                            //Function call
    printf("After squeeze s1: %s\n", s1);                                       //Prints after squeezing
    return 0;
}
