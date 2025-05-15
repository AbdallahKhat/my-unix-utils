#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define COUNT 100

int main(int argc, char **argv)
{

    if (argc != 3)
    {
        printf("Usage: %s file-name\n", argv[0]);
        exit(-1);
    }
    int num_read;
    char buf[COUNT];
    int fd = open(argv[1], O_RDONLY);

    if (fd < 0)
    {
        fprintf(stderr, "Source file does not exist.\n");
        exit(-2);
    }

    int fd_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00644);

    if (fd_dest < 0)
    {
        fprintf(stderr, "Destination file could not be created.\n");
        exit(-3);
    }

    while ((num_read = read(fd, buf, COUNT)) > 0)
    {

        if (write(fd_dest, buf, num_read) < 0)
        {
            fprintf(stderr, "Write to file failed\n");
            exit(-4);
        }
    }

    close(fd);
    close(fd_dest);
    return 0;
}