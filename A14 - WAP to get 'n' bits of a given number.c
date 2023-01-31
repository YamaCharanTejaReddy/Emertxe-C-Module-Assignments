/*
Name:Yama Charan Teja Reddy
Date:24/11/2022
Description:C program to get 'n' bits of a given number
Sample input:
Enter the number: 15
Enter number of bits: 2
Sample output:Result = 3
*/
#include<stdio.h>
int get_nbits(int, int);                                                        //Prototype decleration
int main()
{
    int num, n, res = 0;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter number of bits: ");
    scanf("%d", &n);
    res = get_nbits(num,n);                                                     //function call
    
    printf("Result = %d\n", res);
}
int get_nbits(int num, int n)                                                   //function description
{
    int res = num & (( 1 << n ) - 1);
    return res;                                                                 //returning result
}
