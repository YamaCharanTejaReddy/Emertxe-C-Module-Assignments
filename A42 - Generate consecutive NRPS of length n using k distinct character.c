/*
Name:Yama Charan Teja Reddy
Date:31/01/2023
Description:C program to generate consecutive NRPS of length n using k disinct character
Sample Execution:
Enter the number characters C : 3
Enter the Length of the string N : 6
Enter 3 distinct characters : a b c
Possible NRPS is abcbca
*/
#include<stdarg.h>                                                             //Header files
#include<stdlib.h>
#include<stdio.h>

#define MAXLEN 255                                                              //Defining maximum string length
#define MAXVAL 2000000                                                          //Defining the maximum value boundary
#define MINVAL -200000                                                          //Defining the minimum value boundary

void NPRSString(char str[] , int len, int k);

int main()
{
    int n, k, i, j;
    char kdistinct[MAXLEN];
    
    printf("Enter the number characters C : ");
    scanf("%d", &k);
    if ((k < 1) || (k > 10))                                                    /* Error Check for limit */
    {
        printf("Error: Invalid Number. Retry\n");
        return 1;
    }
    
    printf("Enter the Length of the string N : ");
    scanf("%d", &n);
    if ((n < MINVAL) || (n > MAXVAL))                                           /* boundary check */
    {
        printf("Error: Invalid Number. Retry\n");                               /* Error Check for limit */
        return 1;
    }
    
    printf("Enter %d distinct characters : ",k);
    for (i = 0; i < k; i++)
    {
          scanf("\n%c", &kdistinct[i]);
    }
    
    for (i = 0; i < k; i++)                                                     /* check for distinct characters */
    {
        for (j = (i+1); j < k; j++)
        {
            if(kdistinct[j] == kdistinct[i] )                                   //If the characters are not distinct then error message is printed
            {
                printf("Error : Enter distinct characters\n");
                return 1;
            }
        }
    }
    NPRSString(kdistinct, n, k);                                                //Function call
      return 0;
}
void NPRSString(char str[] , int len, int k)                                    //Function for generating NRPS string
{
    int i, val = 0, count = 0;                                                  //Variable declaration
    printf("Possible NRPS is ");
    for (i = 0; i < len; i++)                                                   //Generates the NRPS string by iterating through the array of distinct characters
    {
        if(i%k == 0 && i != 0)                                                  //If both of these conditions are true, the code increments the value of the variable val by 1.
		{
			val++;
		}
        printf("%c", *(str+((i+val)%k)));                                       //Printing NRPS string
    }
    
}
