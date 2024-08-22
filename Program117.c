#include<stdio.h>
//aavaj yeto 


int main () 
{
    int iCnt =0;
    printf("----------------\n");
    printf("-------------------ASCIT TABLE ------\n");
    printf("---------------------\n");

    for ( iCnt =0; iCnt <= 127; iCnt++)
    {
        printf(" %c\t%d\t%d\t%x\n",iCnt,iCnt,iCnt,iCnt);


    }
    printf("-------------\n");

    return 0; 

}