

/* 
to create new regular file
int creat (char *file_name ,int permission);

file_name : name of new file
permission : file persmmison (0777)

Read : 4 
Write : 2
Execute : 1

Owner of file
group 

*/





#include<stdio.h>
#include<stdlib.h>

#include<unistd.h>
#include<fcntl.h>//micro chi mahati ahe ....

int main () 
{ 

    int fd = 0;

    fd = creat("Marvellous.txt",0777);

    if(fd == -1)
    {
        printf("Unable to open file\n");

    }
    else
    {
        printf("File is succesfuly open with fd : %d\n" );
    
        
    }
    return 0;
}