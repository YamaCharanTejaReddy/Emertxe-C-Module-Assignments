/*
Name:Yama Charan Teja Reddy
Date:24/11/2022
Description:C program to implement Circular left shift
Sample input:Enter the num:25
Enter n:6
Sample output:Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 1 0 0 0 0 0 0 
*/
#include<stdio.h>
int circular_left(int, int);								                    //Circular left shift function declaration
int print_bits(int);									                    //Function declaration for printing circular left shifted bits

int main()
{
    int num, n, res;								                       	   //Variable declaration

    printf("Enter the num:");
    scanf("%d", &num);									                  //storing the number entered by the user
    printf("Enter n:");
    scanf("%d", &n);
    res = circular_left(num, n);							                  //calling function for  circular left shift
    print_bits(res);									                  //calling function for  circular left shift
}
int circular_left(int num, int n)
{ 
    int res; 
    if( num >= 0 ) 										         //if number is positive
    {
        res = num << n | num >> ( 32 - n );
    }
    else       										                //if number is negative
    {
        return ( num ) << n | (( num >> ( 32 - n )) & (( 1 << n ) - 1));
    }
    return res;
}
int print_bits(int res) 
{
    int result, i;
    printf("Result in Binary: ");
    for( i = 31; i >= 0; i -- )                      				           		 //loop to Print bits in binary form
    {
        result = res >> i;
        if( result & 1 )
        printf("1 ");
        else
        printf("0 ");
        
    }
}
