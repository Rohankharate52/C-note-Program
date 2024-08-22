/*
to write the data into the file

int write (int fd, char *Buffer,int size);

buffer : its a base address of character array which contains the data the data that we want to write
Size : Number of byte that we want to write

return value is number of bytes succesfully writeen into the file


*/


//program la sangital file mhade liha...


#include<stdio.h>
#include<stdlib.h>

#include<unistd.h>
#include<fcntl.h>//micro chi mahati ahe ....

int main () 
{ 

    int fd = 0;
    int iRet = 0;
  char Arr[] = "Angular Web development";//23

    fd = open("Marvellous.txt",O_RDWR | _O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");

    }
    else
    {
       // printf("File is succesfuly open with fd : %d\n" );
    
     iRet = write( fd ,Arr,23);  
     printf("%d byte gets succsufully written into the file \n",iRet);
     close(fd);
    }
    return 0;
}