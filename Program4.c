
//Program statemte :  Accept 2 values from user and perform addition...
//step 1 : Undestand the problem statement 
//concusion : We have to accept 2 integers and perfrom its addition.

//step 2: Write the algorithmm
/*
   START 
       Accept first number from user and store it into no1
       Acceept second from user and store it into no2
       Create one variable to store the result named as Ans
       Perform Addition of no1 and no2,store result in Ans
       Display the result form Ans to user



  STOP

*/
//Step 3:  Decide the  programming laguage (c/c++,java ,python)
// We select c programming

//step 4:  Write the program 


#include<stdio.h>

int main() 
{
     auto int iValue1 = 0; //auto 
     auto int iValue2 = 0; //auto
     auto int iAns = 0;   //auto


    printf("Enter first number : \n");
    scanf("%d",iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iAns = iValue1+iValue2;


    printf("addition is : %d\n",iAns);
    return 0;

}
//step 5 :  Test the code

/*
  Test case 1 :
  Input : 10 0
  Output : 21


       2
        10 0
        10



       3
       12 -6
       6

       4
       -6 -5
       -11
       

*/

