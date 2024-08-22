//HOW MANY CHARATER FORM STIRNG COUTNT .....






#include<stdio.h>
 int strlenX (char str[])   // *str    pinter mhade geto 
{
     int iCnt = 0;

     while (*str != '\0') 
     {
        iCnt++;
        str++;


     }
     return iCnt;


}

int main () 
{
    char Arr [20];
    int iRet = 0;    
     
     

    printf("Enter the Sring : \n");
    scanf("%[^'\n']s",Arr);

   iRet = strlenX(Arr);

   printf("Lenth of string is : %d\n",iRet);
   
    return 0;
}