//name geto diplay pn kartory program ......
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main ()
{
    char FileName [30];
    int fd = 0;

    printf("Enter the name file that you want ot open from current directory\n");
    scanf("%d",FileName);

    fd = open(FileName,O_RDWR);
    
    if(fd == -1)
    {
        printf ("Unable to open %s file \n",FileName);

    }
    else
    {
        printf("%S gets opned succufully with file descriptor %d\n",FileName,fd);
        close(fd);
    }
    return 0;
}