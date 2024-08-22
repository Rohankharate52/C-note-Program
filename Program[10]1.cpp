
//write a program in full c++ lag ....

// 1    2   3   4   5   6
// *    *   *   *   *   * 



#include<stdio.h>
#include<iostream>

using namespace std;


void Display(int iNo)  
{ 

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<"*\t";
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;

    cout<<"Enter the count : \n";

    cin>>("%d"&iValue);

    Display(iValue);

    return 0;
}