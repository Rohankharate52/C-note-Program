
//problem statement : Accept radius form user and calculate the area of cirle

// step 1: Undestand the problem statemtn

//Conclsion : We are going to use the formula as PI*R*R

//Step : Algorithm

/* 
START 
    Accetp radius from user and store into RADIUS
    Create varible  as Pi and store value 3.14
    calculate area pi*radius * radius 
    display the value of area to the user 
STOP
*/




#include<stdio.h>  

   float CalculateArea (float  fValue)
{
    auto float fAns = 0.0f;
    auto float PI = 3.14f; 


    fAns = PI * fValue * fValue;
    return fAns;

} 

//////////////////////////////////////////////////////////////////////////
//
//   Funtion name :  calaculateArea
//   Description :   it is used to calculate are of circle
//   input :     float
//   output :   float
//   Auther name :   rohan kharate    
//   date :    02/10/23
////////////////////////////////////////////////////////////////////////////



int main() 
{
     auto  float fRadius = 0.0f;
     auto float fArea = 0.0f;

     printf("Enter the radius of circle :\n");
     scanf("%f",&fRadius);

     fArea = CalculateArea (fRadius);

     printf("Area of circle is : %f\n",fArea);

     return 0;
}