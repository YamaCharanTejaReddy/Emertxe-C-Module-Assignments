/*
Name:Yama Charan Teja Reddy
Date:05/12/2022
Description:
Sample input:Hello World
Charan	TEja	Reddy
G Pulla Reddy	Engineering	College 
Sample output:
Character count : 63
Line count : 3
Word count : 10
*/

#include<stdio.h>
int main ()
{
    int c_count, w_count, l_count;                                              /*Declaring the character_count,word_count,line_count variables*/
    char ch, bch;
    c_count = 0;								/*Initializing the word_count,line_count,character_count variables to 0*/
    w_count = 0;
    l_count = 0;
    while ( ( ch = getchar()) != EOF )						/*While loop*/ 
    {
        c_count ++;
	    if ( ch == ' ' || ch == '\t' || ch == '\n' )		      /* Check number of words */
	    {
	        ++ w_count;
	    }
	    if ( ch == '\n' )						       /* Check number of new lines */
	    {
	        ++ l_count;
	    }
    }
    ++ l_count;
    printf("\nCharacter count : %d", c_count);
    printf("\nLine count : %d", l_count);
    printf("\nWord count : %d", w_count);
    return 0;
}
