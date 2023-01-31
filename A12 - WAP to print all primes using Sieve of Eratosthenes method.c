/*
Name:Yama Charan Teja Reddy
Date:23/11/2022
Description:C program to print all primes using Sieve of Eratosthenes method
Sample input:Enter the value of 'n' : 65
Sample output:The primes less than or equal to 65 are : 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61,
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of 'n' : ");                                        //Asking the user to enter a number of their wish
    scanf("%d", &n);
    if(n <= 1)                                                                  
    {
        printf("Please enter a positive number which is > 1");                  //If user gives number less than or equal to 1 then print this message
    }
    else
    {
        int prime[n + 1];
        for( int i = 1; i <= n; i ++ )                                          //Loading the array with numbers from 1 to n
        {
            prime[i] = i;
            
        }
        for( int i = 2; i*i <= n; i ++ )                                        //Start with least prime number, which is 2.
        {
            if( prime[i] != -1 )
            {
                for( int j = 2*i ; j <= n ; j = j + i )                         //No need to check for numbers greater than square root of n.
                {
                    prime[j] = -1;                                              //They will be already marked
                }
	        }
            
        }
        printf("The primes less than or equal to %d are : ", n);                //Printing the primes less than or equal to given number
        for( int i = 2; i <= n; i ++ )
        {
            if( prime[i] != -1 )
            {
                printf("%d, ", i);
                
            }
        }
    }
}
