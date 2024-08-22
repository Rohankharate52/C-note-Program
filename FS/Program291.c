/*
to delete  the data into the file

void unlink(char  * file _naem);

file name : name of file that we wnat to delete permantly



*/


//file delete zali...



#include<stdio.h>
#include<stdlib.h>

#include<unistd.h>
#include<fcntl.h>//micro chi mahati ahe ....

int main () 
{ 

    unlink ("Marvellous.txt");
    
    return 0;
}