//name geto diplay pn kartory program ......
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main ()
{
    char FileName [30];
    int fd = 0;

    printf("Enter the name file that you want ot creat  from current directory\n");
    scanf("%s",FileName);//#

    fd = creat(FileName, 0777);
    
    if(fd == -1)
    {
        printf ("Unable to open %s file \n",FileName);

    }
    else
    {
        printf("%s gets created  succufully with file descriptor %d\n",FileName,fd);
        
    }
    return 0;  
}