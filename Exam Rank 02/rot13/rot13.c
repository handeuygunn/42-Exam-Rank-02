#include <unistd.h>
int main(int argc, char **argv){
    int i;
    char x;

    i = 0;
    if(argc != 2)
        write(1, "\n", 1);
    else
    {
        while(argv[1][i])
        {
            if((argv[1][i] >= 65 && argv[1][i] <= 77) || (argv[1][i]) >= 97 && argv[1][i] <= 109)
            {
                x = argv[1][i] + 13;
                write(1, &x, 1);
            }
            else if((argv[1][i] >= 78 && argv[1][i] <= 90) || (argv[1][i]) >= 110 && argv[1][i] <= 122)
            {
                x = argv[1][i] - 13;
                write(1, &x, 1);
            } 
            else
            {
                write(1, &argv[1][i], 1);
            }
            i++;
        }
        write(1, "\n", 1);
    }
}

