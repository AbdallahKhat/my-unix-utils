#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define COUNT 100

int main(int argc,char** argv){

    if(argc != 2)
    {
        printf("Usage: %s file-name\n",argv[0]);
        exit(-1);
    }
    int num_read;
    char buf[COUNT];

    int fd = open(argv[1],O_RDONLY);
    if(fd < 0)
    {
        fprintf(stderr, "couldn't open a file\n");
        exit(-2);
    }

    while((num_read = read(fd,buf,COUNT)) > 0)
    {

        if(write(1,buf,num_read) < 0)
        {
            fprintf(stderr, "Write to file failed\n");
            exit(-3);
        }

    }

    close(fd);
    return 0;
    
}