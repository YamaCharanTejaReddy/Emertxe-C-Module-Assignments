/*
Name :Y.Charan Teja Reddy
Date :19/01/2023
Description :WAP to implement fragments using Array of Pointers
Sample input :
Enter no.of rows : 3
Enter no of columns in row[0] : 4
Enter no of columns in row[1] : 3
Enter no of columns in row[2] : 5
Enter 4 values for row[0] : 1 2 3 4
Enter 3 values for row[1] : 2 5 9
Enter 5 values for row[2] : 1 3 2 4 1
Sample output :
Before sorting output is:

1.000000 2.000000 3.000000 4.000000 2.500000

2.000000 5.000000 9.000000 5.333333

1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

After sorting output is:

1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

1.000000 2.000000 3.000000 4.000000 2.500000

2.000000 5.000000 9.000000 5.333333

*/
/* preprocessor directives */
#include<stdio.h>
#include<stdlib.h>
float avg(float *, int);                                                        // function declaration
void sort(float **, int, int *);                                                // function declration
int main()                                                                      // start the program
{
    int row;                                                                    // declare variable as int
    printf("enter no.of rows");                                                 // print the prompt
    scanf("%d", &row);                                                          // read the number of rows
    float *arr[row];                                                            // declare array of pointer
    int col[row];                                                               // declartion of int array
    for (int i = 0; i < row; i++)                                               // for loop to allocate memory for each 1 d array
    {
        printf("enter no of columns in row[%d]",i);                             // print this
        scanf("%d", &col[i]);                                                   // read the number of col element
        arr[i] = (float *) malloc((col[i]+1) * sizeof(float));                  // allocate each 1d array with col[i]+1 number of elemnts
        if (arr[i] == NULL)                                                     // if malloc fail to allocate memory
        {
            printf("error: malloc fail to allocate memeory");                   // print error message
            return 0;                                                           // terminate program
        }
    }
    /*  nested for loop read element for all 2d array index position*/
    for (int i = 0; i < row; i++)
    {
        printf("enter %d values for row[%d]", col[i], i);
        for (int j = 0; j < col[i]; j++)
            scanf("%f", &arr[i][j]);
    }
   /* for loop to find avrage of each 1D array elements */
    for (int i = 0; i < row; i++)
    {
        float avr = avg(arr[i], col[i]+1);                                      // function call and store return value in avr
        arr[i][col[i]] = avr;                                                   // store avarage value at extra allocated memeory of each 1D array
    }
    /* print all elemnts of 2d array */
     printf("Before sorting output is:\n");                                     // print the prompt
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j <( col[i] + 1); j++)
            printf("%f ", arr[i][j]);
        printf("\n");
    }
    printf("After sorting output is:\n");                                       // print the prompt
    sort(arr, row, col);                                                        // function call
    /* after sorting print the all elemnt of 2d array */
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < (col[i]+1); j++)
            printf("%f ", arr[i][j]);
        printf("\n");
    }
    /* free the allocated memory */
    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
        
    }

   return 0;                                                                    // terminate program
}
/* function defination  */
float avg(float *ptr, int size)                                                 // function header
{
    float sum=0, avg;                                                           // declare variable as float
    for (int i = 0; i < size-1; i++)                                            // for loop to find sum of elemnts of ptr[i] 1d array
    {
        sum = ptr[i] + sum;                                                     // add elemnts and store in sum
    }
    avg = sum / (size-1);                                                       // divide sum with size-1 store in avg
    return avg;                                                                 // return avarage
}
/* function defination */
void sort(float **ptr, int row, int *col)                                       // function header
{   
    /* nested for loop to sort rows of 2d array based on avarage value  of each 1d array elemnts*/
    for (int i = 0; i < row; i++)
        for (int j = i + 1; j < row; j++)
        {
            if(ptr[i][col[i]] > ptr[j] [col[j]])                                // if avrage value of ptr[i] is > ptr[j] 
            {
                float *temp = ptr[i];                                           // store base adress of ptr[i] 1d array in temp
                ptr[i] = ptr[j];                                                // store base adress of ptr[j] base adress in ptr[i]
                ptr[j] = temp;                                                  // store temp adress in ptr[j]
                int x = col[i];                                                 // store col[i] value in x
                col[i] = col[j];                                                // store col [j] value in col[i]
                col[j] = x;                                                     // store x value in col[j]
            }
        }
}
