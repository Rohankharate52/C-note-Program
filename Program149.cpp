





//OOP Concept

#//acccept number for user find factor .....

//var var c++ program

//5    input
//120   output..

//Achuvarl code//

//dynamic syntax



#include<iostream>
using namespace std;

class Number 
{  
    private:
        int iNo;
     public://constratorrrr......
       Number (int x)
       {
        iNo = x;
       }
       //Logic 
       int Factorial ( )  //parameter nhi ahe 

       {
int iCnt =0, iFact =1;
for(iCnt = 1; iCnt <=iNo; iCnt++)
{
    iFact = iFact * iCnt;
}

       
       return iFact ; 
       }

};


int main () 
{ 

    int iValue = 0 , iRet =0;

    cout<<" Enter the number : "<<endl;
    cin >>iValue; 

    Number *nobj = new Number (iValue);
iRet = nobj -> Factorial();
    

  cout<<"Fatorial is : " <<iRet<<endl;

     return 0;

}