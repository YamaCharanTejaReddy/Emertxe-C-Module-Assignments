/*
Name:Yama Charan Teja Reddy
Date:17/01/2023
Description:C program to product of two matrices using double pointers with dynamic memory allocation
Sample Execution:
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3x3 matrix:
10
11
12
13
14
15
16
17
18
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3x3 matrix:
19
20
21
22
23
24
25
26
27
Product of two matrix :
732 765 798
930 972 1014
1128 1179 1230
*/
#include <stdio.h>
#include <stdlib.h>
int matrix_mul(int **, int, int, int **, int, int, int **, int, int, int);                              //Prototype declaration
int matrix_mul(int **p1, int row1, int col1, int **p2,int row2, int col2, int **p3,int i,int j,int k)   //Function call
{
    printf("Enter number of rows : ");                                                                  //Taking input of first matrix
    scanf("%d", &row1);
    printf("Enter number of columns : ");
    scanf("%d", &col1);
    printf("Enter values for %dx%d matrix: \n", row1, col1);
    p1 = (int **) malloc (row1 * sizeof(int *));                                                          //Dynamically allocating space for each element of the matrix
    for (i = 0; i < row1; i++)                  
        p1[i] = (int *) malloc (col1 * sizeof(int));
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            scanf("%d", &p1[i][j]);                                                                     //Taking the elements of matrix as input
        }
    }
    printf("Enter number of rows : ");                                                                  //Asking user to give number of rows and columns of second matrix
    scanf("%d", &row2);
    printf("Enter number of columns : ");
    scanf("%d", &col2);
    if (row1 != col2 || row2 != col1)                                                                   //If this condition is true then below message is printed
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
    else                                                                                                //If above conditon in if statement is false then the below lines are executed
    {
        printf("Enter values for %dx%d matrix: \n", row2, col2);                                          
        p2 = (int **) malloc (row2 * sizeof(int *));                                                    //Dynamically allocating memory for each element of the matrix
        for (i = 0; i < row2; i++)
            p2[i] = (int *) malloc (col2 * sizeof(int));
        for (i = 0; i < row2; i++)                                                                      //Asking the user to enter the elements of the second matrix
        {
            for (j = 0; j < col2; j++)
            {
                scanf("%d", &p2[i][j]);
            }
        }

        p3 = (int **) malloc (row1 * sizeof(int *));                                                     //Dynamically allocating memory for each element of the matrix where product of two matrices is stored
        for (i = 0; i < row1; i++)                                                          
            p3[i] = (int *) malloc (col2 * sizeof(int));
        for (i = 0; i < row1; i++)                                                                      //Performing product of two matrices
        {
            for (j = 0; j < col2; j++)
            {
                p3[i][j] = 0;
                for (k = 0; k < col1; k++)
                {
                    p3[i][j] += p1[i][k] * p2[k][j];
                }
            }
        }
        printf("Product of two matrix : \n");                                                           //Printing the resultant matrix of product between two equal matrices
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                printf("%d ", p3[i][j]);
            }
            printf("\n");
        }
    }
    
    for (i = 0; i < row1; i++)                                                                          //Freeing the dynamically alocated memory for elements of first matrix
        free(p1[i]);
    for (i = 0; i < row2; i++)                                                                          //Freeing the dynamically alocated memory for elements of second matrix
        free(p2[i]);
    for (i = 0; i < row1; i++)                                                                         //Freeing the dynamically alocated memory for elements of resultant matrix
        free(p3[i]);
    free;
}
int main()                                                                                              //main() Function  
{
    int **p1, **p2, **p3;                                                                               //Declaration of double pointers of int type
    int row1, col1, row2, col2, i, j, k;                                                                      
    matrix_mul(p1, row1, col1, p2, row2, col2, p3, i, j, k);                                            //Calling Function
    return 0;
}
