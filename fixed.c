#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        return 1;
    }
    int n = atoi(argv[1]);
    char buff[256];
    memset(buff, 0, sizeof(buff));
    char *buff2 = malloc(n);
    memset(buff2, 1, n);
    memcpy(buff, buff2, n);
    printf("%s\n", buff);
}
