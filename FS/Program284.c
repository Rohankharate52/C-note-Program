//

/*

to open existing file
int open(char * File_name ,int Mode);


File_name : Name of file that we want to open 
Mode : Mode in which we want to open file
     o_RDONLY  :Read mode
     o_WRONLY :Write mode
     o_ RDWR : Read + Write mode
On success the funtion will return the interger as file dexcriptor...
 



*/

#include<stdio.h>
#include<stdlib.h>

#include<unistd.h>
#include<fcntl.h>//micro chi mahati ahe ....

int main () 
{ 

    int fd = 0;

    fd = open("Program283.c",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");

    }
    else
    {
        printf("File is succesfuly open with fd : %d\n");

    }
    return 0;
}