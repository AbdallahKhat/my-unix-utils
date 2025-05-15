#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{

    if (argc == 1)
    {
        write(STDOUT_FILENO, "\n", 1);
        return 0;
    }
    if (argc == 2 && strcmp(argv[1], "--help") == 0)
    {
        printf("Prints all arguments given after %s\n", argv[0]);
        return -1;
    }

    for (int i = 1; i < argc;)
    {

        write(STDOUT_FILENO, argv[i], strlen(argv[i]));

        if (argc != ++i)
            write(STDOUT_FILENO, " ", 1);
    }

    write(STDOUT_FILENO, "\n", 1);

    return 0;
}