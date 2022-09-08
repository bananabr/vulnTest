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
    char fixed_arr_buff[256];
    memset(fixed_arr_buff, 0, sizeof(fixed_arr_buff));
    char *fixed_buff = malloc(256);
    memset(fixed_buff, 0, sizeof(fixed_arr_buff));
    char *buff_dynamic = malloc(n);
    memset(buff_dynamic, 1, n);
    memcpy(fixed_arr_buff, buff_dynamic, n);
    memcpy(fixed_buff, buff_dynamic, n);
    printf("%s\n", fixed_arr_buff);
}
