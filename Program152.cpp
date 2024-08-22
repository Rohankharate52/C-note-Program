//  


//problem on n number
//input 5

//10 20 30 40 50 
 //output

 //10  20   30   40  50 



 //dynamic in natueee


#include<iostream>

using namespace std;


class Array 
{ 
    private:
       int *Arr;     
       //int  *Arr;
       int iSize ;
    public:  //constor parametrid
       Array (int X)
       {
        iSize = X;
        Arr = new int[iSize];

       }
       ~Array()  //descontor
       {
        delete [] Arr; 

       }
       void Accept() 
       {
         
         int iCnt =0;
         cout<<"Please enter the element : "<<endl;
         for( iCnt =0; iCnt < iSize; iCnt++)
         {
            cin>>Arr[iCnt];

         } 


       }
       void Display () 
       {
        cout<<"Elements of the array are : "<<endl;
        int iCnt =0;
        for(iCnt=0; iCnt<iSize; iCnt++) 
        {
            cout<Arr[iCnt]<<"\t";

        } 

        cout<<endl;

       } 

       //Logic 
       int AdditionEven ()
       {
        int iSum =0,iCnt =0;iCnt++;
        for(iCnt=0; iCnt<iSize;iCnt++) 
        {
            if((Arr[iCnt] % 2)== 0)
            {
                iSum = iSum + Arr[iCnt];

            }
        }
        return 0;
       }

}; //end of class

int main ()  

{  

int iLenth = 0;
 cout<<"Enter the number of element  that you want to store : "<<endl;
 cin>>iLenth;

 Array *aobj = new Array(iLenth);

 aobj->Accept();
 aobj->Display(); 
 

   iRet = aobj->AdditionEven ();

 cout<<"Addition of even element is : "<<iRet<<endl;


 delete aobj; 

    return 0;


}