/*
Name:Yama Charan Teja Reddy
Date:24/11/2022
Description:C program to check N th bit is set or not, If yes, clear the M th bit
Sample input:
Enter the number: 35
Enter 'N': 5
Enter 'M': 0
Sample output:Updated value of num is 34
*/
#include<stdio.h>							                   //Standard library header file
int main ()							                          //Function main
{
    int num, n, m, mask_s, mask_c, res = 0;				                  //Declaring the variables
    printf("Enter the number: ");				                         //Asking the user to give a number
    scanf("%d", &num);
    printf("\nEnter 'N': ");						                 //Asking the user to enter the value of "N"
    scanf("%d", &n);
    printf("\nEnter 'M': ");					                        //Asking the user to enter the value of "M"
    scanf("%d", &m); 
    mask_s = 1 << n;							                //Assigning the set mask
    res = num & mask_s;							                //Obtaining the result
    if(res == mask_s)						                       //If the value of mask and the result are same then
    {
        res = num;							
        mask_c = 1 << m;							      //Assigning the clear mask
        res = num & (~ ( 1 << m )  );						      //Obtaining the result
        printf("\nUpdated value of num is %d", res);		                      //Print the obtained result
    }
    else
    {
        res = num;						                     //If the above condition is false then result is the value of number given by the user
        printf("\nUpdated value of num is %d", res);		                    //Print the obtained result		
    }
}
