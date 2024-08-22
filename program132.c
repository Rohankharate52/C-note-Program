


//coutn sammll char  in stirng 



#include<stdio.h>
 int  CountSmall(char str[]) ;  // *str    pinter mhade geto 
{
     int iCnt = 0;

     while (*str != '\0') ;//((*str >=  'a') && (*str <= 'z') )
     {
       if((*str == 'a')&& (*str <= 'z'))   //
       {
        iCnt++;  
       }
        //str++;


     }
     return iCnt;
}

int main () 
{
    char Arr[20];
   // char cValue = '\0';
    int iRet = 0;    
     
    // int Ret =0;


    printf("Enter the Sring : \n");
    scanf("%[^'\n']s",Arr);

printf(" Enter the charater for frequncy caluculatin : \n");
 scanf("% c");            // phase 
   iRet = CountSmall(Arr);  

   printf(" frequncy of letter is : %d\n",iRet);
   
    return 0;
}  