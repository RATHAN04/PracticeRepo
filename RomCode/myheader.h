/*******************************************************************************
 *	FILE			:	myheader.h
 *	DESCRIPTION	:	this file includes standard header files, macros definition,
 *					which are utilized in functions.c and main.c program.
 *
 *
 *	NAME			DATE			REFERENCE		REASON
 *	RATHAN H.V      25-01-2021
 ********************************************************************************/

/********************************************************************************
*					USER DEFINED HEADER NAME
********************************************************************************/
#ifndef MYHEADER_H
#define MYHEADER_H
/********************************************************************************
*					INCLUDE STANDARD HEADER FILES
********************************************************************************/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
/********************************************************************************
*							DEFINING MACRO
*********************************************************************************/
    #define MAX_LIMIT 40
/********************************************************************************
*							DEFINING FUNCTION PROTOTYPES
*********************************************************************************/
void inputString(char str[]);
char *noOfWords(char *str);
int longestWord(char str[]);
char *NonWhiteSpace(char *str);
char Replacews(char str[],char myreplacement);
#endif
