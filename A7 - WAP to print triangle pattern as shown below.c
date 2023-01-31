/*   
Name:Yama Charan Teja Reddy
Date:06/11/2022
Description:C program To print the numbers in triangle format
Sample input:Enter the number : 4
Sample output:
1 2 3 4
5     6
7 8
9
*/

#include<stdio.h>
int main()                        
{  
	int i, j, rows, k = 1;                                                       // Initializing the variables

	printf("Enter the number:");                                                // Take the input from user
	scanf("%d", &rows);

   for(i = 1; i <= rows; i++)                                                      // Nested for loop for traingle pattern
   {
	for(j = i; j <= rows; j++)
       {
                if(i == 1 || j == i || j == rows)
		{
		printf("%d ", k++);
		}
		else
		{
		printf(" ");
		}
        }
        printf("\n");                                                              // new line
   }
     return 0;           
}
