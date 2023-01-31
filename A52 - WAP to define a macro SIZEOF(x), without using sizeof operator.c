/*
Name:Yama Charan Teja Reddy
Date:18/01/2023
Description:C program to obtain the functinality of sizeof() operator without using sizeof() operator by using define macro
Sample Execution:
Size of int: 4 bytes
Size of char: 1 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of unsigned int: 4 bytes
Size of long int: 8 bytes
Size of long long int: 8 ytes
Size of short int: 2 bytes
Size of unsigned short int: 2 bytes
Size of long double: 16 bytes
*/
#include<stdio.h>                                                               //Header file
#define SIZEOF(x) (char*) (&x+1) - (char*) &x                                   //defining macro
int main()
{
    int i;                                                                      //declaration of all data types
    float f;
    char c;
    double d;
    long int li;
    long long int lli;
    long double ld;
    short int si;
    unsigned int ui;
    unsigned short int usi;
    printf("Size of int: %ld bytes\n",SIZEOF(i));   
    printf("Size of char: %ld bytes\n",SIZEOF(c));  
    printf("Size of float: %ld bytes\n",SIZEOF(f));  
    printf("Size of double: %ld bytes\n",SIZEOF(d));  
    printf("Size of unsigned int: %ld bytes\n",SIZEOF(ui));                     //function call
    printf("Size of long int: %ld bytes\n",SIZEOF(li));   
    printf("Size of long long int: %ld bytes\n",SIZEOF(lli));  
    printf("Size of short int: %ld bytes\n",SIZEOF(si));    
    printf("Size of unsigned short int: %ld bytes\n",SIZEOF(usi));    
    printf("Size of long double: %ld bytes\n",SIZEOF(ld)); 
    return 0;
}
