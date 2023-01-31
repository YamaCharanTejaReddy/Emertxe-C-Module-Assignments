/*
Name: Y.Charan Teja Reddy
Date: 25/12/2022
Description: Program to find 2nd largest element in an array
Sample Execution:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
Second largest element of the array is 5
*/
#include<stdio.h>
int sec_largest(int *, int);							                        //function declaration
int main()
{
    int size, ret;										     //Read size from the user
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter the elements into array : ");
    int arr[size];
    for ( int i = 0 ; i < size ; i ++ )						                    //Reading the elements from the user
    {
        scanf("%d" , &arr[i]);
    }
    ret = sec_largest ( arr , size );						                    //Function call
    printf("Second largest element of the array is %d\n" , ret );
}
int sec_largest	( int *arr , int size )						                    //Called function
{
    int max1 = *arr;
    arr ++;
    int max2 = *arr;
    arr ++;
    int temp;
    if ( max1 < max2 )     						                            //Swapping
    {
        temp = max1;
        max1 = max2;
        max2 = temp;
    }
    for ( int i = 2 ; i < size ; i ++ )    
    {
        if ( *arr > max1 || *arr == max1 )     
        {
            max2 = max1;
            max1 = *arr;
        }
        else
        {
            if ( *arr > max2 || *arr == max2 )
                max2 = *arr;
        }
        arr ++; 
    }
    return max2;   							                            //Returning 2nd largest to the main
}
