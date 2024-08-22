
// 1 std   8:00
// like wise 5 std;



#include<stdio.h>  
void DisplayExamTime(int iStandard) 
{   

    switch (iStandard) {

    case 1:
         printf("Your exam is at 8 am \n");
         break;

    case 2: 
        printf(" Your exam is at 9 am \n");
        break;

    case 3: 
        printf(" Your exam is at 10 am \n");
        break;

   case 4 :
        printf(" Your exam is at 11 am \n ");
        break;

  case 5 :
       printf( " Your exam is at 12 am \n" );
       break;
   default :
      printf( " wrong input ...\n");

    }
    

}
int main() 
{  
    int iValue = 0;

    printf(" Enter your standards : \n");
    scanf ("%d", &iValue);

    DisplayExamTime(iValue);




     return 0 ;


}
