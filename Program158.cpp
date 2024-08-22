//string in c++ 


//input rohan kharate
//output 
//rohan kharate




#include<iostream>
using namespace std;
class String 
{ 
    private:
      char *str;
    public: 
    
      String () 
      {
        str = new char [20];

      }
      String (int iSize) 
      {
        str = new char [iSize];

      }
      ~String () 
      {
        // delete [] str;
        delete [] str;
      } 
      void Accept () 
      {
         cout<<"ENTR THE STRING :" <<enld;

      }
      void Display () 
      {
        cout<<"String is : "<<str<<endl;

      }  
      //logic 

}; 


int main () 
{  
  
  String sobj (30); 

   sobj.Accept();
   sobj.Display();




    return 0;
}