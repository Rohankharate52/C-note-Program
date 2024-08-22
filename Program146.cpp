//acccept number for user find factor .....

//var var c++ program

//5    input
//120   output..


#include<iostream>
using namespace std;

int Factoral(int iNo) //parameter aasato

{ 

  int iFact = 1 ,iCnt = 0;
  for(iCnt = 1; iCnt <= iNo; iCnt++)
{
    iFact = iFact * iCnt;
}
return iFact;

}

int main () 
{ 

    int iValue =0;
    int iRet = 0;

    cout<<" Enter the number : "<<endl;
    cin >>iValue;
   
   iRet = Factoral(iValue);  
   Cout<<"Factoral is :" <<iRet<<endl;

     return 0;

}