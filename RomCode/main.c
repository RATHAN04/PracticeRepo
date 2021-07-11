
#include "myheader.h"

/*********************************************************************************************************
* Function Name---main
* Description: main Program
* display different program using functions
*
*	NAME			DATE			REFERENCE		REASON
*	RATHAN H.V     25-01-2021
**********************************************************************************************************/

int main()
{
    char input[MAX_LIMIT];
    printf("Enter for Display the String\n");
    inputString(input);
    printf("\n-------------------------------------------------------------------------\n");


    printf("Enter for print No of words each line:\n");
    int count;
    count=noOfWords(input);
    printf("The No of words in each line is:%d \n",count);
    printf("\n-------------------------------------------------------------------------\n");

    printf("\Enter for Size of the Longest Word:\n");
    int sizeLongest;
    sizeLongest=longestWord(input);
    printf("The Size of the Longest Word is: %d\n",sizeLongest);
    printf("\n-------------------------------------------------------------------------\n");


    printf("\Enter for print words in Non White space string:\n");
    NonWhiteSpace(input);
    printf("\n-------------------------------------------------------------------------\n");


    printf("\Enter for Replace special Character with white space:\n");
    char ch='!';
    printf("\nThe count is %d",Replacews(input,ch));

    return 0;
}
