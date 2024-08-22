
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

   float CalculateArea (float fValue)  //step3 
{
    auto float fAns = 0.0f;
    auto float PI = 3.14f; 


    fAns = PI * fValue * fValue; //step4 
    return fAns;   //step 5

}


int main() //step 1 
{
     auto  float fRadius = 0.0f;
     auto float fArea = 0.0f;

     printf("Enter the radius of circle :\n");
     scanf("%f",&fRadius);  // step 2

      fArea = CalculateArea (fRadius);  //step 3    // 5

     printf("Area of circle is : %f\n",fArea);

     return 0;
} 

//gcc program9.c -o Myexe
//./Myexe

//enter the radius of cirlce 
//10.0
//area of cicle is 314.0 