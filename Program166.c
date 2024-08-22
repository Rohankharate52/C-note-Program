

//insertfirst  lat  at pos
//insertdelet   lata  at pos

//display     // count 









//DS

#include <stdio.h>
#include<stdlib.h> //Malloc calloc ....
//structure Delaration ....
struct Node  //memory nahi 

{
    int data;                  //4 bytes
    struct node *next;                 //8 bytes self refreneddsim struterr
    

};
typedef struct node NODE;
typedef struct  node * PNODE;
typedef struct node ** PPNODE;


void InsertFirst(PPNODE Head , int No)
{



}



int main () 
{ 

   //struct node *First = NULL;  //Pointer 8bytes
   PNODE First = NULL;

   InsetFirst(&First, 51);   // fun call 
   InsertFirst(&First,21);
   InsertFirst(&First,11);


     return 0;

}