#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
        if(argc < 3){
                return 1;
        }
        int n = atoi(argv[1]);
        char buff[256];
        memset(buff, 0, sizeof(buff));
        strncpy(buff, argv[2], 300);
        printf("%s\n",buff);
}
