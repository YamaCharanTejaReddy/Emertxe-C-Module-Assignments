/*
Name: Y.Charan Teja Reddy
Date: 25/12/2022
Description: Program to remove duplicate elements in a given array
Sample Input:
Enter the size: 5
Enter elements into the array: 5 1 3 1 5
Sample Output:
After removing duplicates: 5 1 3
*/
#include<stdio.h>
void fun ( int *a1, int size, int *a2, int *new_size ) 
{
    int i, j, temp = 0;
    for ( i = 0; i < size; i ++ ) 
    {
        for ( j = 0; j < temp; j ++ )
        {
            if ( a1[i] == a2[j] )      							                //copying array 1 elements to array 2(temporary array)
            break;  
        }
        if (j == temp)
        {
            a2[temp] = a1[i];    							                    //removing the common elements
            temp ++;
        }
    }
    printf("After removing duplicates: ");
    for ( i = 0; i < temp; i++ )
    {
        printf("%d " , a2[i] );							                        //printing the array 2 which doesnt contain common  array elements
    }
    printf("\n");
}
int main()
{
    int size , new_size;
    printf("Enter the size: ");
    scanf("%d" , &size );
    new_size = size;
    int a1[size] , a2[new_size];
    printf("Enter elements into the array: ");
    for ( int i = 0; i < size; i ++ )
    {
        scanf( "%d", &a1[i] );
    }
    fun ( a1 , size , a2 , &new_size );
    return 0;
}
