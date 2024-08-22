//accept letter for user and chaek is captil or not captil letter 
// 



#include<stdio.h>
#include<stdbool.h>

bool Checksmall(char cValue)  
{
    if(cValue >= ('A ') &&  ( cValue <= 'Z')) 
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
     char ch = '\0';
     bool bRet = false;


     printf("Enter the charactr :\n");
     scanf("%c", &ch);


bRet = Checksmall(ch);
if (bRet == true) 
{
    printf("Its a capitla letter \n");

}
else 
{
    printf("Its not a capital lette \n");

}
 

     return 0;

}