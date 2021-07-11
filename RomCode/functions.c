/*******************************************************************************
 *	FILE			:	day03.c
 *	DESCRIPTION	:	In this file includes various operations given below.
 *
 *	NAME			DATE			REFERENCE		REASON
 *	J Rakshith
 ********************************************************************************/

#include "day03.h"

/*********************************************************************************************************
* Function Name---inputString
* Description: It takes the input string from the user
* Return : return void
**********************************************************************************************************/

void inputString(char str[])
{
    puts("Enter the Input String");
    fgets(str,MAX_LIMIT,stdin);
    printf("The String is:\n");
    puts(str);
}

/*********************************************************************************************************
* Function Name---noOfWords
* Description: print the number of words in each line
* Return : return number of words in each line
**********************************************************************************************************/

char *noOfWords(char *str)
{
    int c=0;
    puts("Enter the Input String\n");
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        if (str[i]!=' ')
        {
            putchar(str[i]);
        }
        else{
            printf("\n");
            c++;
        }
    }
    printf("\n");
    return c+1;

}
/*********************************************************************************************************
* Function Name---longestWord
* Description: It prints the Longest word in the sentence
* Return : return the length of the longest word
**********************************************************************************************************/

int longestWord(char str[]) {

    char longest[30];
    int count = 0, max = 0,i,j,index=0,length;
    printf("Enter String:\n");
    gets(str);
    length = strlen(str);
    index=0;

    for( i = 0 ; i< length ; i++)
    {
        if(str[i] != ' ')
    {
        count++;
    }
    else
    {
        if(count > max)
    {
    max = count;
    index = i-max;
    }
    count = 0;
    }
    }
    if(count>max)
    {
        max = count;
        index = length-max;
    }

    j=0;
    for(i=index;i< index+max;i++)
    {
        longest[j] = str[i];
        j++;
    }

    longest[j] = '\0';
    printf("Longest word in the String is: %s\n", longest);
    return max;

}
/*********************************************************************************************************
* Function Name---NonWhiteSpace
* Description: It prints the string in non white space
* Return : return the non white space string
**********************************************************************************************************/

char *NonWhiteSpace(char *str)
{
    puts("Enter the Input String\n");
    gets(str);
    int i = 0, j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
          str[j++] = str[i];
		i++;
	}
	str[j] = '\0';
	printf("The non White space string is:\n");
	puts(str);

}
/*********************************************************************************************************
* Function Name---Replacews
* Description: Replace the white space with special character
* Return : return how many special character replace the white space
**********************************************************************************************************/

char Replacews(char str[],char myreplacement)
{
    int c=0;
    puts("Enter the Input String\n");
    gets(str);
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == ' ')
            c++;
            str[i] = myreplacement;

    }
    return c;

}

