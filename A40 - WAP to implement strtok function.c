/*
Name :Y.Charan Teja Reddy
Date :20/01/2023
Description :WAP to implement strtok function
Sample input :
Enter string1 : Bangalore;;::---Chennai:;Kolkata:;Delhi:-:Mumbai
Sample output :
Tokens :
Bangalore
Chennai
Kolkata
Delhi
Mumbai
*/
/* preprocessor directives */
#include <stdio.h>                                  
#include <string.h>
#include <stdio_ext.h>
char *my_strtok(char str[], const char delim[]);                                // function declaration

int main()                                                                      // start the program
{
    char str[50], delim[50];                                                    // declration of charrecter array
    printf("Enter the string  : ");                                             // print the prompt
    scanf("%s", str);                                                           // read the string
    __fpurge(stdout);                                                           // fulsh stdout file
    printf("Enter the delimeter : ");                                           // print the prompot
    scanf("\n%s", delim);                                                       // read delimter string
    __fpurge(stdout);                                                           // fulsh the stdout 
    char *token = my_strtok(str, delim);                                        // function call with collect return adress in token
    printf("Tokens :\n");                                                       // print the prompt
    while (token)                                                               // if return adress is not null
    {
        printf("%s\n", token);                                                  // print the token
        token = my_strtok(NULL, delim);                                         // fuction call and send NULL adresss as parament and till token adress is not equal NULL repeat the loop
    }
}
/* function defination */
char *my_strtok(char str[], const char delim[])                                 // function header              
{
    static char *start;                                                         //  declare static char pointer
    static int i = 0, len;                                                      // declaration of static  int variable
    int k = i;                                                                  // declare int variable and store the value of i

    if (str != NULL)                                                            // if str is not null adress in first function call
    {
        start = str;                                                            // store staring adress of string in start
        len = strlen(str);                                                      // find the length of string which not modified
    }

    char *ptr = (start + k);                                                    // assign (start+k)  adresss in ptr to know starting adress of token for each function call
    if (i < len)                                                                // if i value is less than legnth of actual string
    {
        for ( ; start[i] != '\0' ; i++)                                         // for loop to compare char for string with delimtor other than null
            for (int j = 0; delim[j] != '\0'; j++)                              // for loop to comapre each char of source string eith all delimitor char string other than null
                if (start[i] == delim[j])                                       // if char from source string matched with delimtor char
                {
                    start[i] = '\0';                                            // modify that position of string with null
                    if (start[i] != start[i - 1])                               // if ith and (i-1) index are not null
                    {
                        i++;                                                    // increment i value
                        return ptr;                                             // return starting adress token adress which stored in ptr
                    }
                    else                                                        // if ith and (i-1) position are null 
                    {
                        ptr++;                                                  // increment ptr
                        break;                                                  // break inner for loop
                    }
                 }
    }
        if ((len) == i && start[i - 1] != '\0')                                 // if i value equal to length and start[i-1] not null 
        {
            i++;                                                                // then increment i
            return ptr;                                                         // return starting adress of token
        }
        else if (i > len || start[i - 1] == '\0')                               // if i value greater than length if string  or start[i-1] is null
        {
            return NULL;                                                        // return null adress
        }

}
