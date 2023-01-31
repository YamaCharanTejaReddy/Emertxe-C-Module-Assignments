/*
Name:Yama Charan Teja Reddy
Date:19/01/2023
Description:C program to swap any two similar data type variables using macro
Sample Execution:
1.int
2.char
3.short
4.float
5.double
6.string
Enter your choice: 6
Enter the string1 : charan
Enter the string2 : teja
After Swapping:
string1 : teja
string2 : charan
*/
#include<stdio.h>
#include<stdlib.h>
#define macro_swap(t,x,y) \
t temp = x;      \
     x = y;      \
     y = temp;    \
     
int main()
{
    int option;                                                                 //Variable declaation
    printf("1.int\n2.char\n3.short\n4.float\n5.double\n6.string\n");            //giving options to the user
    printf("Enter your choice: ");                                              //choosing the data type from the user
    scanf("%d",&option);
    switch(option)                                                          	//Switch case for all data types
    {
        case 1:
        {
            int num1,num2;                                                      //Variable declaation
		    printf("Enter the num1 : ");                                        //Reading the two numbers from user
		    scanf("%d",&num1);
		    printf("Enter the num2 : ");
		    scanf("%d",&num2);
		    macro_swap(int,num1,num2);                                          //macro function call for swaping
		    printf("After Swapping: \n");                                       //Printing after swap
		    printf("num1 : %d\n",num1);
		    printf("num2 : %d\n",num2);
            
        }
        break;
        case 2:
        {
            char ch1,ch2;                                                       //Variable declaation
            printf("Enter the ch1 : ");                                         //Reading the two characters from user
            scanf(" %c",&ch1);
            printf("Enter the ch2 : ");
            getchar();
		    scanf("%c",&ch2);
		    macro_swap(int,ch1,ch2);                                            //macro function call for swaping
		    printf("After Swapping: \n");                                       //Printing after swap
		    printf("num1 : %c\n",ch1);
		    printf("num2 : %c\n",ch2);
	    }
	    break;
	    case 3:
	    {
	        short num1,num2;                                                    //Variable declaration
		    printf("Enter the num1 : ");                                        //Reading the two numbers from user
		    scanf("%hd",&num1);
		    printf("Enter the num2 : ");
		    scanf("%hd",&num2);
		    macro_swap(int,num1,num2);                                          //macro function call for swaping
		    printf("After Swapping: \n");                                       //Printing after swap
		    printf("num1 : %hd\n",num1);
		    printf("num2 : %hd\n",num2);
	    }
	    break;
	    case 4:
	    {
	        float num1,num2;                                                    //Variable declaration
		    printf("Enter the num1 : ");
		    scanf("%f",&num1);
		    printf("Enter the num1 : ");
		    scanf("%f",&num2);
		    macro_swap(float,num1,num2);                                        //macro function call for swaping
		    printf("After Swapping: \n");                                       //Printing after swap
		    printf("num1 : %f\n",num1);
		    printf("num2 : %f\n",num2);
	    }
	    break;
	    case 5:
	    {
	        double num1,num2;                                                   //Variable declaration
        	printf("Enter the num1 : ");
        	scanf("%lf",&num1);
        	printf("Enter the num2 : ");
        	scanf("%lf",&num2);
        	macro_swap(double,num1,num2);                                       //macro function call for swaping
        	printf("After Swapping: \n");                                       //Printing after swap
        	printf("num1 : %lf\n",num1);
        	printf("num2 : %lf\n",num2);
	    }
	    break;
	    case 6:
	    {
	        char *str1,*str2;                                                   //declaring character pointer
        	str1=calloc(50,sizeof(char));
        	str2=calloc(50,sizeof(char));                                       //dynamic memory allocation using calloc
        	printf("Enter the string1 : ");
        	scanf("%s[^\n]",str1);
        	printf("Enter the string2 : ");
        	scanf("%s[^\n]",str2);
        	for(int i=0; str1[i] != '\0' || str2[i] != '\0'; i++)               //for loop to iterate the string till it find the null
        	{
        	    macro_swap(char,str1[i],str2[i]);                               //macro function call for swaping
        	}
        	printf("After Swapping: \n");                                       //Printing after swap
        	printf("string1 : %s\n",str1);
        	printf("string2 : %s\n",str2);
        	free(str1);
        	free(str2);
	    }
	    break;
	    default:
	    printf("Enter the valid choice");
    }
    return 0;
}
