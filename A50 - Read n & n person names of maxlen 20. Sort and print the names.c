/*
Name:Yama Charan Teja Reddy
Date:31/01/2023
Description:C program to read n & n person names of maxlen 20.Sort and print the names
Sample Execution:
Enter the size: 5
Enter the 5 names of length max 20 characters in each
[0] -> Delhi
[1] -> Agra
[2] -> Kolkata
[3] -> Bengaluru
[4] -> Chennai
The sorted names are:
Agra
Bengaluru
Chennai
Delhi
Kolkata
*/
#include<stdio.h>                                                               //Standard I/O library, which is used for reading in input from the user and printing output to the screen.
#include<stdlib.h>                                                              //Standard library, which is used for allocating and releasing memory dynamically.
#include<string.h>                                                              //String library, which is used for string manipulation like comparing and copying strings.
void sortNames(char (*name)[20], int n)                                         //Function
{
    char temp[20];                                                              //Variable declaration
    for (int i = 0; i < n - 1; i++)                                             //Outer loop iterates through the array of names
    {
        for (int j = i + 1; j < n; j++)                                         //Inner loop compares each name with the next one.
        {
            if (strcmp(name[i], name[j]) > 0)                                   //If the current name is lexicographically greater than the next one, it sorts
            {
                strcpy(temp, name[i]);                                          //Bubble sorting the names accoriding to alphabetical order
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
}
int main()                                                                      //main() function
{
    int n;                                                                      //Variable declaration
    printf("Enter the size: ");
    scanf("%d", &n);
    char (*name)[20] = (char (*)[20]) malloc (n * sizeof(char[20]));            //Dynamic memory allocation
    printf("Enter the %d names of length max 20 characters in each\n", n);
    for (int i = 0; i < n; i++)                                                 //for loop for printed the size number of names as input for sorting
    {
        printf("[%d] -> ", i);
        scanf("%s", name[i]);
    }
    sortNames(name, n);                                                         //Functional for sorting names alphabetically
    printf("\nThe sorted names are:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%s\n", name[i]);                                                //Printing the sorted names
    }
    free(name);                                                                 //Freeing dynamically allocated memory
    return 0;
}
