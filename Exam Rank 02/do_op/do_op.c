#include <stdlib.h>
int main(int argc, char **argv){
    int x;
    int y;
    int result;

    result = 0;
    if(argc != 4)
        printf("\n");
    else
    {
        x = atoi(argv[1]);
        y = atoi(argv[3]);
        if(argv[2][0] == '+')
            result = x + y;
        else if(argv[2][0] == '-')
            result = x - y;
        else if(argv[2][0] == '*')
            result = x * y;
        else if(argv[2][0] == '/')
            result = x / y;
        printf("%d\n", result);
    }
}
