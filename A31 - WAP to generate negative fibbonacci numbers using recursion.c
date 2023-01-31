/*
Name:Y.Charan Teja Reddy
Date:02/12/22
Description: Program to generate  negative fibonacci series using recursion
Sample input:
Enter a number: -8
Sample output:
0, 1, -1, 2, -3, 5, -8
*/

#include<stdio.h>
int d = 0;
void negative_fibonacci( int, int, int, int );                                  					    //Prototype declaration
int main()
{
    int limit;
    printf("Enter the limit : "); 
    scanf("%d", &limit);   											     	    //Reading the limit upto which series is to be printed 
    if( limit > 0 )
    printf("Invalid input\n");												    //Printing error msg for negative values
    else
    negative_fibonacci(limit, 0, 1, 0);											   //Function call
    return 0;
}
void negative_fibonacci( int limit, int f, int s, int t )
{
    if( limit == 0 )
    printf("%d", limit);
    else if( d >= limit )
    {
        printf("%d ", t);
        f = s;
        s = t;
        t = f - s;
        if( t > 0 )
        d = - t;
        else
        d = t;
        negative_fibonacci(limit, f, s, t);										  //Recursive call
    }   
}
