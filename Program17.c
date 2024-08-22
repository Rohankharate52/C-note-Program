


//CalculatePercentage user total percetange kiti padale 
 

 //validation .... 

#include<stdio.h>
float CalculatePercentage(int iMarks, int iTotal) 

{
    auto float fPercentage = 0.0f;  

    if ( (iMarks < 0) || (iTotal < 0 ) )       //Filter ...  Invalid input ahe sangtey ..
    
    {
        printf("Invalid input\n");    
        return fPercentage;  

    }  
    /* 
    if (iMarks > iTotal )
    {
         printf("Invalid input\n");
         return fPercentage;
    } 
    */

    fPercentage = (( (float)iMarks /  (float) iTotal)* 100);
    return fPercentage;


} 

int main ()

{ 


   auto int iValue1 = 0;
   auto int iValue2 = 0;
   auto float fRet = 0.0f;

 
    printf(" Enter the num  : \n") ;
    scanf(" %d", &iValue1);   

    printf(" Enter the mark : \n");   
    scanf(" %d", &iValue2);  


  fRet = CalculatePercentage(iValue1, iValue2);


     printf(" Your percetnage is : %f\n", fRet);


    return 0;
} 
