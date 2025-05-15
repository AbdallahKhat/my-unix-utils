#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    struct stat sb;

    if (argc <= 3)
    {
        if (argc == 1)
        {
            fprintf(stderr, "my_mv: missing file operand\n");
            exit(-2);
        }

        else if (argc == 2)
        {
            fprintf(stderr, "my_mv: missing destination file operand after '%s'\n", argv[1]);
            exit(-3);
        }

        else if (!(stat(argv[1], &sb) == 0 && (S_ISREG(sb.st_mode) || S_ISDIR(sb.st_mode))))
        {
            fprintf(stderr, "my_mv: cannot stat '%s': No such file or directory\n", argv[1]);
            exit(-4);
        }
    }

    else if (argc > 3)
    {

        if (!(stat(argv[argc - 1], &sb) == 0 && S_ISDIR(sb.st_mode)))
        {
            fprintf(stderr, "my_mv: target '%s' is not a directory\n", argv[argc - 1]);
            exit(-5);
        }
    }

    for (int i = 1; i < argc; i++)
    {
        if (rename(argv[i], argv[argc - 1]) != 0)
        {
            fprintf(stderr, "my_mv: Operation Failed!\n");
            exit(-1);
        }
    }

    return 0;
}