


#include<stdio.h>
void Display (char str[])   // *str    pinter mhade geto 
{
    printf ("String is: %s\n",str) ;

}

int main () 
{
    char Arr [20];

    printf("Enter the Sring : \n");
    scanf("%[^'\n']s",Arr);

   Display (Arr);
   

   // printf("Enter string is : %s : %s\n",Arr);
    return 0;
}