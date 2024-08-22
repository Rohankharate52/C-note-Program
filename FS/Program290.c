/*
to read  the data into the file

int read  (int fd, char *Buffer,int size);

buffer : its a base address of character array which contains the data the data that we want to write
Size : Number of byte that we want to write

return value is number of bytes succesfully read  into the file


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
  char Arr[] = {'\0'};//#

    fd = open("Marvellous.txt",O_RDWR);//#

    if(fd == -1)
    {
        printf("Unable to open file\n");

    }
    else
    {
       // printf("File is succesfuly open with fd : %d\n" );
    
     iRet = read( fd ,Arr,22);  
     printf("%d byte gets succsufully read into the file \n",iRet);//#
     printf("%s\n",Arr);//#
     close(fd);
    }
    return 0;
}