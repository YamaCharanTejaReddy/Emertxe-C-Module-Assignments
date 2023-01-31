/*
Name:Yama Charan Teja Reddy
Date:19/01/2023
Description:C program to student record using array of structures
Sample Execution:
Enter no.of students : 4
Enter no.of subjects : 6
Enter the name of subject 1 : Maths
Enter the name of subject 2 : Physics
Enter the name of subject 3 : Chemistry
Enter the name of subject 4 : Biology
Enter the name of subject 5 : Zoology
Enter the name of subject 6 : Electronics

----------Enter the student datails-------------

Enter the student 1 Roll no.: 10
Enter the student 1 name : Charan
Enter Maths mark : 94
Enter Physics mark : 95
Enter Chemistry mark : 96
Enter Biology mark : 97
Enter Zoology mark : 98
Enter Electronics mark : 99


----------Enter the student datails-------------

Enter the student 2 Roll no.: 20
Enter the student 2 name : Santhosh
Enter Maths mark : 92
Enter Physics mark : 93
Enter Chemistry mark : 94
Enter Biology mark : 95
Enter Zoology mark : 96
Enter Electronics mark : 97


----------Enter the student datails-------------

Enter the student 3 Roll no.: 30
Enter the student 3 name : Vinay
Enter Maths mark : 85
Enter Physics mark : 90
Enter Chemistry mark : 95
Enter Biology mark : 100
Enter Zoology mark : 70
Enter Electronics mark : 75


----------Enter the student datails-------------

Enter the student 4 Roll no.: 40
Enter the student 4 name : Harsha
Enter Maths mark : 30
Enter Physics mark : 35
Enter Chemistry mark : 40
Enter Biology mark : 45
Enter Zoology mark : 50
Enter Electronics mark : 55


----Display Menu----

1. All student details
2. Particular student details

Enter your choice : 1
Roll No     Name        Maths         Physics       Chemistry      Biology       Zoology     Electronics     Average      Grade
10         Charan       94.000000     95.000000     96.000000     97.000000     98.000000     99.000000     96.500000       A
20         Santhosh     92.000000     93.000000     94.000000     95.000000     96.000000     97.000000     94.500000       A
30         Vinay        85.000000     90.000000     95.000000     100.000000    70.000000     75.000000     85.833336       B
40         Harsha       30.000000     35.000000     40.000000     45.000000     50.000000     55.000000     42.500000       F

Do you want to continue to display(y/n) : n

*/
#include<stdio.h>								                                //Header files
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef struct student								                            //Definig the structure named "student"
{
    int roll_no;
    char *name;
    float *marks;
    float avg;
    char grade;
}student;

char assignGrade(float avg)							                            //Function to find the grade based on average obtained
{
    if(avg >= 90.0f)
    {
        return 'A';
    }
    else if(avg >= 80.0f)
    {
        return 'B';
    }
    else if(avg >= 70.0f)
    {
        return 'C';
    }
    else if(avg >= 60.0f)
    {
        return 'D';
    }
    else if(avg >= 50.0f)
    {
        return 'E';
    }else
    {
        return 'F';
    }
}
void print_column_headings(char **subject, int s)				                //Function for printing the headings
{
    printf("Roll No     Name        ");
    for(int i = 0 ; i < s ; i++)
    {
        printf("%s", subject[i]);
        int space = 15 - strlen(subject[i]);					                //Loop to print spaces as per subject name length
        for(int k = 0; k < space; k++)
        {
            printf(" ");
        }
    }
    printf("Average      Grade\n");	
}
void print_student_info(student record, int s)					                //Function for printing the student information (Roll.No,Name,Marks,Sunjects,Average,Grade)
{   
    printf("%d", record.roll_no);
    int space = 11 - (int)(log10((double)record.roll_no) + 1);
    for(int k = 0; k < space; k++)
    {
        printf(" ");
    }
    printf("%s",record.name);
    space = 13 - strlen(record.name);
    for(int k = 0; k < space; k++)
    {
        printf(" ");
    }
    for(int j = 0 ; j < s ; j++)
    {
        printf("%f", record.marks[j]);
        int mark = (int)record.marks[j];					                    //Explicit conversion of float to get number of digits in order to print spaces accordingly
        space = 7 - (int)(log10((double)mark) + 1);
        for(int k = 0; k < space; k++)
        {
            printf(" ");
        }
    }
    printf("%f",record.avg);
    space = 9 - (int)(log10((double)record.avg) + 1);				            //Formula to find number of digits 
    for(int k = 0; k < space; k++)
    {
        printf(" ");
    }
    printf("%c\n", record.grade);
}
int main()									                                    //main() function
{
    student record[100];							                            //Variable declarations
    int n;
    int s;
    int roll_no;
    char *name;
    float *marks;
    char **subject;
    printf("Enter no.of students : ");						                    //Asking the user to enter number of students
    scanf("%d", &n);
    printf("Enter no.of subjects : ");					                    	//Asking the user to enter number of subjects
    scanf("%d", &s);
    subject = (char **) malloc (s * sizeof(char*));			                	//Allocating memory to form array of strings
    for(int i =0 ; i < s ; i++)							                        //Allocating memory for each string
    {
        subject[i] = (char*)(malloc(sizeof(char)*50));
        printf("Enter the name of subject %d : ", i + 1);
        scanf("%s", subject[i]);
    }
    for(int i = 0 ; i < n ; i++)
    {
        printf("\n----------Enter the student datails-------------\n\n");
        float sum = 0;
        printf("Enter the student %d Roll no.: ",i+1);				            //Asking the user to enter the roll no.of student to enter the details
        scanf("%d", &record[i].roll_no);
        printf("Enter the student %d name : ", i + 1);			            	//Asking the user to enter the name of the student to enter the details
        record[i].name = (char*)malloc(20);					       //Allocating 20 bytes memory to store name in ith student record
        scanf("%s", record[i].name);
        record[i].marks = (float*)malloc(sizeof(float)*s);		              //Allocating memory to store s number of float marks
        for( int j = 0 ; j < s ; j++ )
        {
            printf("Enter %s mark : ", subject[j]);
            scanf("%f", &record[i].marks[j]);
            sum += record[i].marks[j];					             //Calculating sum as well to get average
        }
        record[i].avg = sum / s ;						     //Avg = sum divided by total number of subjects
        record[i].grade = assignGrade(record[i].avg);			            //Set grade as per grade
        printf("\n");
    }
    char while_display_choice = 'y';
    do
    {   
        printf("\n----Display Menu----\n\n");
        int display_choice;
        printf("1. All student details\n");
        printf("2. Particular student details\n\n");
        printf("Enter your choice : ");
        scanf("%d", &display_choice);
        if(display_choice == 1)							    //Condition will be true if display_choice is 1
        {
            print_column_headings(subject,s);
            for(int i = 0 ; i < n ; i++)					    //If display_choice is 1 then student information of all students will be printed
            {
                print_student_info(record[i],s);
            }
        }
        else if(display_choice == 2)					           //Condition will be true if display_choice is 2
        {
            printf("\n----Menu for Particular student----\n\n");		
            int particular_student_choice;
            printf("1.Name\n");							  //Asks the user to choose the option of searching the student information by help of roll no. or by name of stduent
            printf("2.Roll no.\n\n");
            printf("Enter your choice : ");
            scanf("%d", &particular_student_choice);
            if(particular_student_choice == 1)					  //If condition true then user has choosen the search method by name 
            {
                char name[20];
                printf("Enter the name of the student : ");			  //Asks the user to give the name of the student
                scanf("%s", name);
                for( int i = 0; i < n ; i++)					  //for loop for checking the list of student information
                {
                    if(strcmp(name,record[i].name) == 0)		          //When the given name by the user matches any one of the list of students information then flag becomes 0 
                    {   
                        print_column_headings(subject,s);		          //Prints the information of particular student along with the headings on the screen
                        print_student_info(record[i],s);
                    }
                }
                
            }
            else if(particular_student_choice == 2)				   //When particular_student_choice is 2 then the user has chosen search method by roll no.of student
            {
                int roll_numer;
                printf("Enter the roll no.of the student : ");			  //Asks the user to enter the roll no.of student
                scanf("%d", &roll_numer);   
                for( int i = 0; i < n ; i++)					  //for loop for checking the list of student information
                {
                    if(name,record[i].roll_no == roll_numer)			 //When the user input roll no matches with the roll no.of student in student record then below lines are executed
                    {
                        print_column_headings(subject,s);			 //Prints the information of particular student along with the headings on the screen
                        print_student_info(record[i],s);
                    }
                }
            }
        }
        printf("\nDo you want to continue to display(y/n) : ");			
        scanf(" %c", &while_display_choice);					
    }
    while (while_display_choice == 'y');					 //Asks the user to proceed or stop the accessing of student information in the student record
}
