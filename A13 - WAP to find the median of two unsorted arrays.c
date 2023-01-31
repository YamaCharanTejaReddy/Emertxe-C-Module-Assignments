/*
Name:Yama Charan Teja Reddy
Date:23/12/2022
Description:C program to find median of two unsorted arrays
Sample input:
Enter the 'n' value for Array A: 5  
Enter the 'n' value for Array B: 4
Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 13 7 5
Sample output:
Median of array1 : 4
Median of array2 : 9.5
Median of both arrays : 6.75
*/
#include<stdio.h>
int Bubble_sortA ( int arr_A[] , int n1 );				                        //Prototype declaration
int Bubble_sortB ( int arr_B[] , int n2 );
int median_A ( int arr_A[] , int n1 );
int median_B (int  arr_B[] , int n2 );
int main()
{
    int n1 , n2;
    printf ( "Enter the 'n' value for Array A: " );        		                /*taking size of two arrays from the user*/
    scanf ( "%d", &n1 );
    printf ( "Enter the 'n' value for Array B: " );
    scanf ( "%d", &n2 );
    int arr_A[n1] , arr_B[n2];
    float RES , M1 , M2;
    printf ( "Enter the elements one by one for Array A: " ); 		            //Taking array A elements from user
    for ( int i = 0 ; i < n1 ; i ++ )
    {
        scanf ( "%d", &arr_A[i] );
    }
    printf ( "Enter the elements one by one for Array B: " );		            //Taking array B elements from user
    for ( int j = 0 ; j < n2 ; j ++ )
    {
        scanf( "%d", &arr_B[j] );
    }
    Bubble_sortA ( arr_A , n1 ); 					                            //Bubble sort function call
    Bubble_sortB ( arr_B , n2 );
    int N;
    if ( n1 % 2 == 0 )							                                //When the size of arrayA is even then do following operations
    {
        N = n1 / 2;
        M1 = ( float ) ( arr_A[N] + arr_A[ N - 1 ] ) / 2;
        printf ( "Median of array1 : %g\n" , M1 ); 
    }
    else
    {
        M1 = ( float ) median_A ( arr_A , n1 );			       	                //If above condition is false then do the followin operations
        printf ( "Median of array1 : %g\n" , M1 );
    }
    if ( n2 % 2 == 0 )						                                	//When the size of arrayB is even then do following operations
    {
        N = n2 / 2;
        M2 = ( float ) ( arr_B[N] + arr_B[ N - 1 ] ) / 2;		
        printf ( "Median of array2 : %g\n" , M2 ); 
    }
    else							      	                                    //If above condition is false then do the following opeartions
    {
        M2 = ( float ) median_B ( arr_B , n2 );
        printf ( "Median of array2 : %g\n" , M2 );
    }   
    RES = ( M1 + M2 ) / 2;					      	                            //Calculating the average of medians of arrayA and arrayB
    printf ( "Median of both arrays : %g" , RES ); 		
    return 0;
}
int Bubble_sortA ( int arr_A[] , int n1 ) 				                        //Bubble sort function declaration
{
    int temp;
    for ( int i = 0 ; i < n1 - 1 ; i++ )
    {
        for ( int j = 0 ; j < n1 - i - 1 ; j ++ )            		            //Using bubble sort technique to sort elements in array
        {
            if ( arr_A[j] > arr_A[j + 1])
            {
                temp = arr_A[j];
             	arr_A[j] = arr_A[j + 1];
             	arr_A[j + 1] = temp;
            }
        }
    }
    return arr_A[n1];
}
int Bubble_sortB ( int arr_B[] , int n2 )				                        //Bubble sort function declaration
{
    int temp;
    for ( int i = 0 ; i < n2 ; i ++ )
    {
        for ( int j = 0; j < n2 - i - 1 ; j ++ )			                    //Using bubble sort technique to sort elements in array
        {
            if ( arr_B[j] > arr_B[j + 1] )
            {
                temp = arr_B[j];
                arr_B[j] = arr_B[j + 1];
                arr_B[j + 1] = temp;
                
            }
            
        }
    }
    return arr_B[n2];
}
int median_A ( int arr_A[] , int n1 )					                        //Median function declaration
{
    int N;
    N = ( n1 ) / 2;
    return arr_A[N];         						                            //Calculating median and returning
}
int median_B ( int arr_B[] , int n2 )					                        //Median function declaration
{
    int N;
    N = ( n2 ) / 2;
    return arr_B[N];							                                //Calculating median and returning
}
