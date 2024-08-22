/*

iRow = 5
iCol = 5 



*/


#include<iostream> 

using namespace std; 

class Pattern 
{
  
  private: 
    int iRow;
    int iCol;

  public:
    Pattern (int X,int Y) 
    {
         iRow = X;
         iCol = Y;

    }
    void Display () 
    {
        //logic 

        int i=0,  j=0;
        for(i=1; i<=iRow; i++) 
        {
            for(j =1; j<= iCol ; j++)
            {
                if( i== j) 
                { 
                    cout<<"$\t";
                }
                else if( (i==1) || (i == iRow) || (j == 1) || (j == iCol  ))
                {
                    cout<<"*\t";
                }
                else if (i <j) 
                {
                    cout<<"1\t";
                } 
                
            }
        }  
        cout<<endl;
             
    
    }
};



int main  ()  

{  

int iValue1 = 0 , iValue2 = 0 ;
cout<<"Enter num of row : " <<endl;
cin >> iValue1; 


cout<<"Enter num of col :" <<endl;
cin>>iValue2;

Pattern *pobj = new Pattern(iValue1,iValue2);

pobj->Display();

delete pobj;  //deallocate memory free keli 


    return 0;
}