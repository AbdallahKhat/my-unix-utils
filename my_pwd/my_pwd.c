#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{

    char *path = getcwd(NULL, 0);

    if (path == NULL)
    {
        printf("Path Length Is Too Big\n");
    }
    else
    {
        printf("%s\n", path);
    }

    free(path);

    return 0;
}