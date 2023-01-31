/*
Name:Yama Charan Teja Reddy
Date:06/11/2022
Description:C program to display the day after n days wrt to choosen first day
Sample input:
Sample output:
Enter the value of 'n': 145
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 5
The day is Monday
 */
#include<stdio.h>
int main()
{
    int n, day, fday, dday;                                                        		//Initializing the variables
    printf("Enter the value of 'n': ");                                         		//reading no of days
    scanf("%d", &n);
    if(1 <= n && n <= 365)
    {
        printf("Choose First Day :\n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\nEnter the option to set the first day : ");
        scanf("%d", &fday);                                                      		//reading value of first day from user
        if(1 <= fday && fday <= 7)
        {
            day= n + fday - 1;                                                       		//calcuting the day number
            dday = day % 7;
            switch(dday)                                                        		//for associating day number with day
           {
               case 1: printf("The day is Sunday\n");
                       break;
               case 2: printf("The day is Monday\n");
                       break;
               case 3: printf("The day is Tuesday\n");
                       break;
               case 4: printf("The day is Wednesday\n");
                       break;
               case 5: printf("The day is Thursday\n");
                       break;
               case 6: printf("The day is Friday\n");
                       break;
               default:printf("The day is Saturday\n");
          }
        }
        else
        {
           printf("Error: Invalid input, first day should be > 0 and <= 7\n");  	     //Printing the error message when the first day given by the user is not in specified range
        }
    }
    else
    {
          printf("Error: Invalid Input, n value should be > 0 and <= 365\n");   	    //printing the error message when the value of n given by the user is not in specified range
    }
    return 0;
}
