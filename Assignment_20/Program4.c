/* Accept N numbers from the user and accept range,Display all elements from that range 
Input:  N:        6
        Start:    60
        End:      90
        Elements: 85 66 3 76 93 88
Output: 66 76 88
*/

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d ", Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0,iCnt = 0,iValue1 = 0,iValue2 = 0;
    int *p = NULL;

    printf("Enter the number of elements:");
    scanf("%d",&iSize);

    printf("Enter the Starting point:");
    scanf("%d",&iValue1);

    printf("Enter the Ending point:");
    scanf("%d",&iValue2);
    
    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d Elements\n",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter Element %d:",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    Range(p,iSize,iValue1,iValue2);

    free(p);

    return 0;
}
