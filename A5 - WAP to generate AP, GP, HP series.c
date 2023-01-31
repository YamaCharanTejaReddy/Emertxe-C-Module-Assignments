/*
Name:Yama Charan Teja Reddy
Date:06/11/2022
Description:C program to generate AP,GP,HP series
Sample input:
Enter the First Number 'A': 10
Enter the Common Difference / Ratio 'R': 6
Enter the number of terms 'N': 8
Sample output:
AP= 10, 16, 22, 28, 34, 40, 46, 52,
GP= 10, 60, 360, 2160, 12960, 77760, 466560, 2799360,
HP= 0.100000, 0.062500, 0.045455, 0.035714, 0.029412, 0.025000, 0.021739, 0.019231,
*/

#include<stdio.h>						                             //stdio.h header file
#include<math.h>						                             //math.h header file
int main()
{
    int A, R, N;							                    //Initializing the variables
    printf("Enter the First Number 'A': ");			                            //Reading the first number
    scanf("%d", &A);
    printf("Enter the Common Difference / Ratio 'R': ");	                            //Reading the common difference / ratio
    scanf("%d", &R);
    printf("Enter the number of terms 'N': ");			                            //Reading the number of terms
    scanf("%d", &N);	
    if(N >= 1)							                           //When number of terms given by the user is greater than or equal to 1 then do the below operations
    {
        int sum = 0, i, A_next;
        A_next = A;
        printf("AP= ");
        for(i = 0; i < N; i++)
        {
            printf("%d, ", A_next);        			                            //to generate AP series
            sum += A_next;
            A_next += R;
        }
	printf("\n");
        int s = 0, j, G_next;
        G_next = A;
        printf("GP= ");
        for(j = 0; j < N; j++)
        {
            printf("%d, ", G_next);           			                           //to generate GP series
            s += G_next;
            G_next *= R;
        }
	printf("\n");
        int k, H_next;
        H_next = A;
        printf("HP= ");
        for(k = 0; k < N; k++)
        {
            printf("%f, ", (1 / (float)H_next));  			                  //to generate HP series
            H_next += R;
        }
	printf("\n");
    }
    else
    {
        printf("Invalid input");				                         //Printing the error message when the user input is below 1
    }
    return 0;
}
