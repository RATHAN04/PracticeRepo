/*******************************************************************************
 *	FILE			:	main.c
 *	DESCRIPTION	:	this file includes main function with switch case
 *
 *	NAME			DATE			REFERENCE		REASON
 *	RATHAN.H.V		27-01-2021
 ********************************************************************************/

#include "myutil.h"
int main()
{
    int arr[MAXSIZE];
    memset(arr,0,MAXSIZE);
    int len=0;
    int i,choice=0;
    printf("Enter The No Of Elements:\n");
    scanf("%d",&len);
    int numarr[MAXSIZE];
    printf("Enter The Elements of Array:\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    int elementsToAdd;
    int elementsToBeDisplayed;
    int key;
    int answer;
    int elementsAdded;


    printf("\n");
    printf("---------------------Welcome To APPCENTER-----------------------\n");
    printf("\n");
    printf(" -------------------Press 1 to DisplayElements--------------------\n");
    printf("--------------------Press 2 to AddElements------------------------\n");
    printf("--------------------Press 3 to BubbleSort-----------------------\n");
    printf("--------------------Press 4 to MergeSort-----------------------\n");
    printf("--------------------Press 5 to BinarySearch-----------------------\n");

     printf("Please Enter Your Choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {

        case 1:

           printf("Enter The Number Elements To Be Displayed\n");

            scanf("%d",&elementsToBeDisplayed);
            if(elementsToBeDisplayed>MAXSIZE)
            {
                printf("Enter A Valid Number");
            }
            else
            {
                Display(arr,elementsToBeDisplayed);
            }
            break;


        case 2:
            printf("Enter The Number Of Elements to be Inserted\n");
            scanf("%d",&elementsToAdd);
            elementsAdded=AcceptAndDisplay(arr,elementsToAdd,MAXSIZE);
            printf("Number Of Elements Accepted: %d\n",elementsAdded);
            break;

        case 3:
                printf("Sorting By BubbleSort:\n");
                BubbleSort(arr,len);
                Display(arr,len);
                break;
        case 4:
                printf("Sorting Array By Merge Sort:\n");
                mergesort(arr,0,len-1);
                Display(arr,len);
                break;
        case 5:
                 BubbleSort(arr,len);
                 printf("Array Sorted by BubbleSort:\n");
                 Display(arr,len);
                 printf("Enter The Element To Be Searched in Array:\n");
                 scanf("%d",&key);
                 answer=binarysearch(arr,0,len-1,key);
                 if(answer==-1)
                 {
                     printf("The element %d is not found\n",key);
                 }
                 else
                 {
                     printf("The element %d is found at index : %d\n",key,answer);
                 }
                 break;
        default:
                printf("Invalid choice\n" );
    }






    return 0;
}
