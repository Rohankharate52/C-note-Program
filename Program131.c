//user enter charater 



// data   = 2  a ahe ... 

//HOW MANY CHARATER FORM STIRNG COUTNT .....






#include<stdio.h>
 int Counta(char str[],char ch)   // *str    pinter mhade geto 
{
     int iCnt = 0;

     while (*str != '\0') 
     {
       if(*str == ch)  //
       {
        iCnt++;
       }
        str++;


     }
     return iCnt;


}

int main () 
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;    
     
     int Ret =0;


    printf("Enter the Sring : \n");
    scanf("%[^'\n']s",Arr);

printf(" Enter the charater for frequncy caluculatin : \n");
 scanf("% c");            // phase 
   iRet = Counta(Arr,cValue);

   printf(" frequncy of letter is : %d\n",iRet);
   
    return 0;
}  