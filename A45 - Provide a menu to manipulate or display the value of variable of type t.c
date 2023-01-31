/*
Name:Yama Charan Teja Reddy
Date:31/01/2023
Description:C program to provide menu to manipulate or display the value of variable of type t
Sample Execution:
Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 1
Enter the int : 2
Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 2
Enter the char : C
Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 3
Enter the float : 0.5
Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 4
Enter the double : 2.7
Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
------------------------
0 -> 2 (int)
1 -> C (char)
2 -> 0.500000 (float)
3 -> 2.700000 (double)
------------------------
Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 2
Enter the index value to be deleted : 2
index 2 successfully deleted.
Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
------------------------
0 -> 2 (int)
1 -> C (char)
2 -> 2.700000 (double)
------------------------
Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 4
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 8                                                              //Defining a constant MAX_SIZE = 8, which represents the maximum number of elements that can be stored in memory

typedef struct                                                                  //A struct called Element, which contains a type field that indicates the type of the element
{
    int type;
    union                                                                       //Union field called data, which contains fields for storing different types of data (int, char, float, and double).
    {
        int i;
        char c;
        float f;
        double d;
    } data;
} Element;

Element memory[MAX_SIZE];                                                       //Defines an array called memory of type Element, which will be used to store the elements in memory
int size = 0;                                                                   //Integer variable called size, which will be used to keep track of the number of elements currently in memory.

void addElement(int type)                                                       //addElement(int type) which prompts the user to enter a value for the element and stores it in the memory array.
{
    if (size == MAX_SIZE) 
    {
        printf("Error: Memory full\n");
        return;
    }
    memory[size].type = type;
    switch(type) 
    {
        case 1:
            printf("Enter the int : ");
            scanf("%d", &memory[size].data.i);
            break;
        case 2:
            printf("Enter the char : ");
            scanf(" %c", &memory[size].data.c);
            break;
        case 3:
            printf("Enter the float : ");
            scanf("%f", &memory[size].data.f);
            break;
        case 4:
            printf("Enter the double : ");
            scanf("%lf", &memory[size].data.d);
            break;
        default:
            printf("Invalid type\n");
            return;
    }
    size++;
}
void removeElement(int index)                                                   //removeElement(int index) which removes an element from the memory array at a specified index.
{
    if (index < 0 || index >= size) 
    {
        printf("Error: Invalid index\n");
        return;
    }
    for (int i = index; i < size - 1; i++) 
    {
        memory[i] = memory[i + 1];
    }
    size--;
    printf("index %d successfully deleted.\n", index);
}
void displayElements()                                                          //displayElements() which display all the elements in the memory array.
{
    printf("------------------------\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d -> ", i);
        switch(memory[i].type) 
        {
            case 1:
                printf("%d (int)\n", memory[i].data.i);
                break;
            case 2:
                printf("%c (char)\n", memory[i].data.c);
                break;
            case 3:
                printf("%f (float)\n", memory[i].data.f);
                break;
            case 4:
                printf("%lf (double)\n", memory[i].data.d);
                break;
        }
    }
    printf("------------------------\n");
}
int main() 
{
    int choice, type, index;                                                    //Variable declarations
    while (1)                                                                   //while loop runs indefinitely until the choice becomes 4
    {
        printf("Menu :\n");
        printf("1. Add element\n");
        printf("2. Remove element\n");
        printf("3. Display element\n");
        printf("4. Exit from the program\n");
        printf("Choice ---> ");
        scanf("%d", &choice);
        switch(choice)                                                          //Based on the user's choice, the program calls the appropriate function to add an element, remove an element, display all elements, or exit the program.
        {
            case 1:                                                             //Adding the element of any type
                printf("Enter the type you have to insert:\n");
                printf("1. int\n2. char\n3. float\n4. double\n");
                printf("Choice ---> ");
                scanf("%d", &type);
                addElement(type);
                break;
            case 2:                                                             //Deleting the element of any type based on the index value
                printf("Enter the index value to be deleted : ");
                scanf("%d", &index);
                removeElement(index);
                break;
            case 3:
                displayElements();                                              //Displaying the elements
                break;
            case 4:
                return 0;                                                       //Exiting the program
            default:
                printf("Invalid choice\n");                                     //If choice is not as in above case then it prints invalid choice error message
                break;
        }
    }
    return 0;
}
