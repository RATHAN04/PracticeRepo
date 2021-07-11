/*******************************************************************************
 *	FILE			:	functions.c
 *	DESCRIPTION	:	this file includes display,accept and display,bubble sort,
                    mergesort and binarysearch functions.
 *
 *
 *	NAME			DATE			REFERENCE		REASON
 *	RATHAN.H.V		27-01-2021
 ********************************************************************************/

#include "myutil.h"

/**************************************************************************

    FUNCTION_NAME: Display

    DESCRIPTION: This function is used to specified number of ArrayElements.

    PARAMETERS: integer array and number of elements to display.

    RETURN VALUE: It returns void

******************************************************************************/
void Display(int *arr,/* Input Array*/
             int displaycount)/*number of elements to display*/
{
    int i;
    printf("The Array Elements are:\n");
    for( i=0;i<displaycount;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

}

/****************************************************************************

    FUNCTION_NAME: AcceptAndDisplay

    DESCRIPTION: This function is used to accept elements to the array and
                populate the array with elements

    PARAMETERS: integer array and int elementsTobeAdded and int maxsize possible.

    RETURN VALUE: It returns numberofelementsAccepted

******************************************************************************/
int AcceptAndDisplay(int arr[],/* Input Array*/
                     int elementsTobeAccepted,/*elementstobe added*/
                     int maxSize)/*max size allowed for array*/
{
    int acceptCount=0;
    int i;
    if(elementsTobeAccepted>maxSize)
    {

        printf("Number is Greater Than Maximum Size\n");
        return acceptCount;
    }
    else
    {
        printf("Enter The Array Elements To Be Added:\n");
        for(i=0;i<elementsTobeAccepted;i++)
        {
            scanf("%d",&arr[i]);
            acceptCount++;
        }
    }
    return acceptCount;
}

/****************************************************************************

    FUNCTION_NAME: BubbleSort

    DESCRIPTION: This function is used to sort array elements in ascending
                    order using bubblesort algorithm

    PARAMETERS: integer array and arraylength

    RETURN VALUE: It returns void

******************************************************************************/
void BubbleSort(int *arr, /*InputArray*/
                int len) /*length of the array*/
{
    int i,j,temp=0;
    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-i-1;j++)
        {
            if(arr[j]>arr[j+1]) //check and swap if true
            {
                temp=arr[j];     //swap two numbers using temp variable
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}


/****************************************************************************

    FUNCTION_NAME: mergesort

    DESCRIPTION: This function is used to partition the given array based
                mid value and send it to merge function for sorting and merging

    PARAMETERS: integer array and int lowerbound and int upperbound.

    RETURN VALUE: It returns void

******************************************************************************/

void mergesort(int *arr,/* Input Array*/
               int lowerbound,/*lowerindex*/
               int upperbound)/*upperindex*/
{
    //check for atleast two elements in array to sort
    if(lowerbound<upperbound)
    {
        int mid=(lowerbound+upperbound)/2; //finding the mid of the array for partioning
        mergesort(arr,lowerbound,mid);
        mergesort(arr,mid+1,upperbound);
        merge(arr,lowerbound,mid,upperbound);
    }


}


/********************************************************************************************

    FUNCTION_NAME: merge

    DESCRIPTION: This function is a helper function in merge sort algorithm
                it helps in merging partition and sorting them

    PARAMETERS: integer array and int values like lowerbound,mid and upperbound values
    RETURN VALUE: It returns void

*************************************************************************************************/
void merge(int *arr,/* Input Array*/
           int lowerbound,/*lowerindex*/
           int mid,/*midindex*/
           int upperbound)/*upperindex*/
{

    int i=lowerbound;
    int j=mid+1;
    int k=lowerbound;
    int tempArr[MAXSIZE]; //temporay array used for storing
    memset(tempArr,0,MAXSIZE); //initialize temp array to zeros

    while(i<=mid && j<=upperbound) //to check bounds of array
    {
        if(arr[i]<=arr[j])
        {
            tempArr[k]=arr[i];
            i++;
        }
        else
        {
            tempArr[k]=arr[j];
            j++;
        }
        k++;
    }

    if(i>mid) //first partition as finished and remaining elements are in second partition
    {
        while(j<=upperbound)
        {
            tempArr[k]=arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            tempArr[k]=arr[i];
            i++;
            k++;
        }
    }
    int c;
    for(c=lowerbound;c<=upperbound;c++) //copying items from temp array to original array
    {
        arr[c]=tempArr[c];
    }
}




/****************************************************************************

    FUNCTION_NAME: binarySearch

    DESCRIPTION: This function is used to search key in the array
    PARAMETERS: integer array and lowerbound,higherbound,keytobesearched

    RETURN VALUE: It returns void

******************************************************************************/
int binarysearch(int *array,/*InputArray*/
                 int lowerbound, /*lowerbound index*/
                 int higherbound, /*upperbound index*/
                 int keytobesearched) /*elementtobesearched*/
{
    if(higherbound>=1)
    {
        int mid=(lowerbound+higherbound)/2;

        if(keytobesearched==array[mid])
        {
            return mid;
        }

        else if(keytobesearched>array[mid])
        {
            return binarysearch(array,mid+1,higherbound,keytobesearched);
        }
        else
        {
            return binarysearch(array,lowerbound,mid-1,keytobesearched);
        }
    }
    return -1;

}



