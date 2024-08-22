

#include <stdio.h>
int main () 
{  
  char Arr [20] ;       //static menory allocation 
  printf("Enter the string : \n");
   //
   //scanf("%s",Arr);   // samajane khadhi tyabach 
   gets (Arr); //kalat ch nhi kadhi tyanbach 


  printf("Enter string is : %s\n",Arr);
  return 0;

}