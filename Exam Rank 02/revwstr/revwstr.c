#include <unistd.h>

int main(int argc, char **argv){
    int i;
    int j;

    i = 0;
    if(argc != 2)
        write(1, "\n", 1);
    else
    {
        while(argv[1][i])
            i++;
        j = i;
        while(i >= 0)
        {
            if(argv[1][i] == 32)
            {
                i++;
                while(argv[1][i] && (argv[1][i] != 32))
                {
                    write(1, &argv[1][i], 1);
                    i++;
                }
                write(1, " ", 1);
                i = j;
            }
            else if(i == 0)
            {
                while(argv[1][i] != 32 && argv[1][i])
                {
                    write(1,  &argv[1][i], 1);
                    i++;
                }
                i = -1;
            }
            i--;
            j = i;
        }
        write(1, "\n", 1);
    }
}
