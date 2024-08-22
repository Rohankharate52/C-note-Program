
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
     int i,j,k;
    printf("Enter first number : \n");
    scanf("%d",&i);

    printf("Enter second number : \n");
    scanf("%d",&j);

     k = i+j;
    printf("addition is : %d\n",k);
    return 0;

}

