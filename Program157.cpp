//string in c++ 

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
         delete [] str;

      } 
      void Accept () 
      {
         cout<<"Enter the string : "<<endl;
         //cin >>str;
         //
         gets(str);

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