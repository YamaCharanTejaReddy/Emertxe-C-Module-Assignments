/*
Name:Yama Charan Teja Reddy
Date:06/11/2022
Description:C program to print pyramid pattern 
Sample input:Enter the number: 10   
Sample output:
10
9 10
8 9 10
7 8 9 10
6 7 8 9 10
5 6 7 8 9 10
4 5 6 7 8 9 10
3 4 5 6 7 8 9 10
2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
2 3 4 5 6 7 8 9 10
3 4 5 6 7 8 9 10
4 5 6 7 8 9 10
5 6 7 8 9 10
6 7 8 9 10
7 8 9 10
8 9 10
9 10
10
*/
#include<stdio.h>					                                            //stdio.h header file
int main()
{
    int i, j, n, k;					                                            //Initializing the variables
 
    printf("Enter the number: ");			                                    	   //Asking the user to give the number
    scanf("%d", &n);	                                                            		   //Accessing the user defined number
    
    //Upper half triangle
    
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(i == j)
	    {
		printf("%d ", n);
	    }
	    for(k = 1; k <= n; k++)
	    {
		if(i - j == k)
		{
		    printf("%d ", n - k);
		}
	    }
        }
        printf("\n");
    }
    
    //Lower inverted half triangle
       
    for(i = 2; i <=n ; i++)
    {
	for(j = i; j <= n; j++)
	{
	    printf("%d ", j);
	}
	printf("\n");
    }
    return 0;
}
