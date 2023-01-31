/*
Name: Y.Charan Teja Reddy
Date: 02/12/22
Description: Program to generate fibonacci series using recursion
sample input:
Enter a number: 8
sample outputt:
0, 1, 1, 2, 3, 5, 8
*/
#include<stdio.h>
void positive_fibonacci(int, int, int, int);                                    //Prototype declaration
int main()
{
    int limit;
    printf("Enter the number : "); 
    scanf("%d", &limit);                                                        //reading the limit or number upto which series is to be printed 
    if ( limit < 0 )
    printf("Invalid input\n");                                                  //printing error msg for negative values
    else
    positive_fibonacci(limit, 0, 1, 0);                                         //function call
    return 0;
}
void positive_fibonacci(int limit, int f, int s, int t)
{
    if( limit >= 0 && f <= limit )
    {
        printf("%d ", f);
        t = f + s;
        f = s;
        s = t;
        positive_fibonacci(limit, f, s, t);                                     //recursive call
    }
}
