/*
Name:Yama Charan Teja Reddy
Date:18/01/2023
Description:C program to generate magic matrix of (n*n)size
Sample Execution:
7
30 39 48 1 10 19 28 
38 47 7 9 18 27 29 
46 6 8 17 26 35 37 
5 14 16 25 34 36 45 
13 15 24 33 42 44 4 
21 23 32 41 43 3 12 
22 31 40 49 2 11 20 
*/
#include<stdio.h>							//Header files
#include<stdlib.h>
int magic_square(int **, int, int);					//Prototype declaration
int magic_square(int **arr, int i, int j)				//Function 
{
    int row, col, n, k, p, q;						 //Variable declaration
    scanf("%d", &n);							//Taking the size of magic matrix as input for creating nxn magic matrix
    if(n %2 == 0)							//When given size by the user is even then below error message is printed
    {
        printf("Error : Please enter only positive odd numbers\n");
        return 0;
    }
    else								//When condition in if statement is flase then below lines of code is executed
    {
        int mid = n/2;							//Declaring variable "mid" and stoing the n/2 value into it
        row = col = n;							//Number of rows = Number of columns = Size of matrix 
        arr = (int **) malloc (row * sizeof(int *));			//Dynamically allocated memory for magic matrix
        for (i = 0; i < row; i++)
            arr[i] = (int *) malloc (col * sizeof(int));		//Dynamically allocating memory for elements of magic matrix
        for(i = 0; i < row; i++)
        {
            for(j = 0; j < col; j++)
            {
                arr[i][j] = 0;						//Initially assigning all the elements of magic matrix to zero
            }
        }
        k = mid;							//Sets the starting column position to the middle of the square
        j = 0;								//Sets the starting row position to 0.
        for(i = 1; i <= n * n; i++)					//Loops through each element of the 2D array, starting with 1 and ending with n*n.
        {
            arr[j][k] = i;						//Assigns the current value of i to the current position of the 2D array.
            p = j--;							//Store the current row and column positions
            q = k++;
            if(j < 0)							//Check if the current row position is out of bounds, and if so, wraps it back to the last row.
            {
                j = n - 1;
            }
            if(k > n - 1)						//Check if the current column position is out of bounds, and if so, wraps it back to the first column.
            {
                k = 0;
            }
            if(arr[j][k] != 0)	                       			//Checks if the current position of the 2D array is already filled and if so sets the column position to the previous column and the row position to the next row.
            {
                k = q;
                j = p + 1;
            }
        }
        for(j = 0; j < n; j++)						//Loops through each element of the 2D array and prints it to the console.
        {
            for(k = 0; k < n; k++)
            {
                printf("%d ", arr[j][k]);
            }
            printf("\n");
        }
        for(i = 0; i < row; i++)					//Freeing the allocated memory
            free(arr[i]);
        free;
    }
}
int main()
{
    int **arr, i, j;							//Declaring the variables in main() function
    magic_square(arr, i, j);						//Calling the function
}
