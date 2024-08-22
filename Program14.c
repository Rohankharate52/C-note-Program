

/* 
START 
    Accept number form user
    divide that number by 2
    if remainder is 0 then display even
    otherwise dispaly odd 
    STOP
*/ 


///////////////////////////////////////////////////////////////////////////////////////////
//
// name : rohan kharate 
// program :   Accept number from user divide that number by2 
//             if remainder is 0 then disply even oherwise dispaly odd
//
//  Input :  int 
//  output :  int
/////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if ((iNo % 2 )==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main () 
{
    int iValue = 0;
    bool bRet = false; 

    printf("Enter number : \n");
    scanf("%d ", &iValue);

    bRet = CheckEven(iValue);
    if (bRet == true)
    {
        printf("%d is an even number \n",iValue);
    }
    else{
        printf("%d is an odd number \n", iValue);
    } 

    return 0;

}