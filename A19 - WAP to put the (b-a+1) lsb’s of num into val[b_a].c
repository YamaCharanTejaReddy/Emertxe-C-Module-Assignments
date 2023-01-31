/*
Name:Yama Charan Teja Reddy
Date:25/11/2022
Description:C program to put the (b-a+1) lsb’s of num into val[b:a]
Sample input:
Enter the value of 'num' : 120
Enter the value of 'a' : 3
Enter the value of 'b' : 5
Enter the value of 'val': 50
Sample output:Result : 2
*/
#include <stdio.h>
int replace_nbits_from_pos(int, int, int, int);						            		//Prototype declaration
int main()										                       //Caller function main
{
    int num, a, b, val, result = 0;						                    	      //Declaring the variables
    printf("Enter the value of 'num' : ");
    scanf("%d", &num);
    printf("Enter the value of 'a' : ");
    scanf("%d", &a);
    printf("Enter the value of 'b' : ");
    scanf("%d", &b);
    printf("Enter the value of 'val': ");
    scanf("%d", &val);       
    result = replace_nbits_from_pos(num, a, b, val);					                      //Returned value from the called function
    printf("Result : %d\n", result);						                              //Print the returned value
}
int replace_nbits_from_pos(int num, int a, int b, int val)				                      //Called function
{
    int n, i, mask_c, result_c, mask_g, result_g, result, mask;			                              //Declaring the variables under the called function
    n = ( b - a ) + 1;										              //Calculating the number of bits to be replaced
    for( i = n; i <= b; i ++ )	                                                			     //for loop for clear the bits of "val"							
    {
        mask_c = ~ ( 1 << i );
        result_c = val & mask_c;
        val = result_c;
    }
    mask_g = (( 1 << a ) - 1 );									             //Mask for getting the "a" number of bits from the LSB of the "num"
    result_g = num & mask_g;
    mask = result_g << ( b - n + 1 );								            //Mask for moving the got bits from "num" according the value of b
    result = result_c | mask;								
    return result;									                    //Return the result
}
