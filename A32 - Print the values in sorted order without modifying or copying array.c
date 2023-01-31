/*
Name:Y.Charan Teja Reddy
Date: 25/12/2022
Description: Program to Print the values in sorted order without modifying or copying array
Sample Input:
Enter the size : 4
Enter 5 elements 
9 2 4 1
Sample Output:
After sorting: 1 2 4 9
Original array values 9 2 4 1
*/
#include<stdio.h>
void print_sort( int* , int );                                                  //function declaration
int main()
{
    int size, iter;                                                             // declaring variables  
    printf("Enter the size of the array : ");              
    scanf("%d", &size);
    int a[size];                                                                //initilizing array
    printf("Enter the %d elements\n",size);                                     // taking array elements input from user
    for ( iter = 0; iter < size; iter ++)                                       //using for loop accessing array index values
    {
        scanf("%d", &a[iter]);
    }
    print_sort(a, size);                                                        // function call
}
void print_sort(int *a,int size)                                                // function defination
{
    int small, large, i, j, temp;                                               // declearing variables
    small = large = a[0];                                                       // assuming a[0] as smallest and largest values
    for ( i = 0 ; i < size ; i ++ )                    
    {
        if( a[i] < small )                                                      // comparing with array other index values
        {
            small = a[i];                                                       //obtaining smallest element in array
        }
        if( a[i] > large )                                                      // comparing with array other index values
        {
            large = a[i];                                                       //obtaining largest element in array
        }
    }
    printf("After sorting: %d ", small);                                        // printing first smallest value 
    for( i = 1 ; i < size ; i ++ )                                 
    {
        temp = large;
        for( j = 0 ; j < size ; j ++ )
        {
            if( a[j] > small && a[j] < temp )                                   //comparing a[j] with small and large
            {
                temp = a[j];                                                    //updating temp 
            }
        }
        printf("%d ", temp);
        small = temp;                                                           //taking small as temp
    }
    printf("\nOriginal array values ");
    for( i = 0 ; i < size ; i ++ )
    {
        printf("%d ", a[i]);                                                    //printing original array
    }
}
