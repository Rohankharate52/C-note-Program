
//216 
#include<iostream>
using namespace std;

typedef struct node  
{
    int data;
    struct node *next;
      
}NODE,*PNODE,**PPNODE;


class SinglyLL //Behaviro charater
{
   
     private: 
      PNODE first; //pointer
      int Count;   //interger 
       
       SinglyLL ()    //constrotr  
       { 
        cout<<"Inside constructor\n";  
        first = NULL;
        Count = 0;    
        

       }


       void InsertFirst(int no)
       { 
         PNODE newn =NULL;//MEmory allocated
         newn = new NODE;
         newn->data = no;
         newn->next = NULL; 

         if ( first ==NULL ) //IF(COUNT == 0 ) 
         {

            first = newn; 
            
         }
         else 
         {
            newn->next = first ;
            first = newn;

         } 
         Count++; 
       }


       void InsertLast(int no)
       {   
         
         PNODE newn =NULL;//MEmory allocated

         PNODE temp = first;   //#

         newn = new NODE;
         newn->data = no;
         newn->next = NULL; 

         if ( first ==NULL ) //IF(COUNT == 0 ) 
         {

            first = newn; 
            
         }
         else 
         {
              while(temp -> next != NULL)
                {
                  temp = temp ->next;

              }
               temp->next = newn;

         } 
         Count++; 



       } 

       void Display() 
       { 
        PNODE temp = first;
       cout<<"Enter of  the linked list are : \n";

          while(temp !=NULL )//
        {
            cout<<" | "<<temp->data<<" | ->"; 
            temp = temp ->next;

        }

       }  

       int CountNode()
       {
        return Count;

       } 

};

int main () 
{ 
    SinglyLL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.InsertLast(201);

    obj.Display (); 
    cout<<"Numbe of elements in the linked list are : "<<obj.Count<<"\n";

    return 0;
}