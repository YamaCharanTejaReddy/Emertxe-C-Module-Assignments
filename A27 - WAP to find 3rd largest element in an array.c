/*
Name: Y.Charan Teja Reddy
Date: 25/12/2022
Description: Program to find 2nd largest element in an array
Sample Execution:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
Third  largest element of the array is 4
*/
#include <stdio.h>
int third_largest ( int *arr , int size , int min )			                	//Called function
{
    int max1 , max2 , max3;
    max1 = max2 = max3 = min;
    for ( int i = 0 ; i < size ; i ++ )
    {
        if ( *arr > max1 )							                            //Checking whether the element is larger than first largest element
        {
            max3 = max2;
            max2 = max1;
            max1 = *arr;
        }
        else if ( *arr > max2 )						                        	//Checking whether the element is larger than second largest element
        {
            max3 = max2;
            max2 = *arr;
        }
        else if ( *arr > max3 )							                        //Checking whether the element is larger than third largest element
        {
            max3 = *arr;
        }
        arr ++;
    }
    return max3;								                                //Returning to main() function
}
int main()
{
    int size , i , ret;
    printf("Enter the size of the array: ");				                	//Asking the user to enter the size of array
    scanf( "%d", &size );
    int arr[size] , min;
    printf("Enter the elements into array: ");
    for ( i = 0 ; i < size ; i ++ )       
    {
        scanf( "%d", &arr[i] );  						                        //Reading the elements of array
    }
    min = arr[0];
    for ( i = 1 ; i < size ; i ++ )
    {
       if  ( arr[i] < min )
       {
           min = arr[i];    							                        //finding smallest in the given array
       }
    }
   ret = third_largest ( arr , size , min );
   printf( "Third largest element of the array is %d", ret );
   return 0;
}
