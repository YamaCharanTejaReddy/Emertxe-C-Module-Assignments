/*
Name:Yama Charan Teja Reddy
Date:25/11/2022
Description:C program to implement the circular right shift
Sample input,Sample output:
Enter num: 12
Enter n : 3
Result : 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1
Enter num: -12
Enter n : 3
Result : 1 0 0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0
*/
#include<stdio.h>
int circular_right(int, int);							//Circular right shift function prototype declaration
int print_bits(int);								 //Prototype declaration for printing circular right shifted bits
int main()   
{
    int num, n, ret;                                                            //Variable declaration
    printf("Enter the num:");
    scanf("%d", &num);                                                          //Storing the number entered by the user
    printf("Enter n:");
    scanf("%d", &n);
    ret = circular_right(num, n);                                               //Function call
    print_bits(ret);
    return 0;
}
int circular_right(int num, int n)                                              //Called function
{
    int i, num1 = 0;
    num1 = num >> 3;
    for( i = 31; i >= ( 32 - n ); i -- )
    {
        num1 = num1 ^ ( 1 << i );
    }
    if( num >= 1 )                                                              // Condition for positive value
    {
        return ( num >> n) | ( num << ( 32 - n )); 
    }
    else                                                                        // Condition for negative values
    {
        return num1 | ( num << ( 32 - n ));
    }
}
int print_bits(int num)                                                         //Called function
{
    int i, res = 0;   
    printf("Result in Binary: ");
    for( i = 31; i >= 0; i -- )                                                 //Loop to print the binary value
    {
        res = num >> i;
        if( res & 1 )
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }
}	
