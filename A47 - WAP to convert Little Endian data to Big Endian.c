/*
Name:Yama Charan Teja Reddy
Date:31/01/2023
Description:C program to convert little endian to big endian
Sample Execution:
Enter the size : 4
Enter any number in Hexadecimal: 12345678
After conversion 78563412
*/
#include<stdio.h>
#include<stdint.h>                                                              //Header file to access integer related functions where the size of each data type is same for different types of compilers
void swap_endianness(int *, int);                                               //Function for changing endianess
int main()
{
    int size, hex;                                                              //Variable declaration
    int *ptr;
    printf("Enter the size : ");                                                //Asking the user to enter the size of the data type of data to be converted
    scanf("%d", &size);
    printf("Enter any number in Hexadecimal: ");                                //Asking user to enter any hexadecimal number
    scanf("%x", &hex);
    ptr = &hex;                                                                 //Integer pointer 'ptr' stores the base address of the hexadecimal number
    if(size == 2)                                                              
    {
        swap_endianness(ptr, sizeof(short));                                    //When size == 2 then function is called with size argument as sizeof(short)
        printf("After conversion %x", *ptr);                                    //Printed the converted data 
    }
    else
    {
        swap_endianness(ptr, sizeof(int));                                      //When size != 2 then function is called with size argument as sizeof(int)
        printf("After conversion %x", *ptr);                                    //Printed the converted data
    }
    return 0;
}
void swap_endianness(int *ptr, int size)                                        //Function for conversion of little endian data to big endian
{
    int temp;
    for(int i = 0; i < size / 2; i++)                                           //Swapping the bits of data for size-1 times
    {                                                                           //Here 'i' ranges from 0 to 1 for int type and from 0 for short type 
        temp = ((uint8_t*)ptr)[i];                                              //Storing the "i"th byte of data into temp
        ((uint8_t*)ptr)[i] = ((uint8_t*)ptr)[size - i - 1];                     //Swapping the "i"th byte of data and (size-i-1)th byte of data 
        ((uint8_t*)ptr)[size - i - 1] = temp;                                   //Replacing the "i"th byte of data at the position of (size-i-1)th byte of data
    }
}
