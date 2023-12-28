#include <unistd.h>

int main(int argc, char **argv){
    int i;
    int z;

    i = 0;
    z = 0;
    if(argc != 2)
        write(1, "\n", 1);
    else{
        while(argv[1][i])
            i++;
        i--;
        while(argv[1][i] == 32 || (argv[1][i] >= 8 && argv[1][i] <= 13))
            i--;
        while(argv[1][z] == 32 || (argv[1][z] >= 8 && argv[1][z] <= 13))
            z++;
        while(argv[1][z] && z <= i)
        {
            if(argv[1][z] == 32 || (argv[1][z] >= 8 && argv[1][z] <= 13))
                write(1, " ", 1);
            while(argv[1][z] == 32 || (argv[1][z] >= 8 && argv[1][z] <= 13))
                z++;
            write(1, &argv[1][z], 1);
            z++;
        }
        write(1, "\n", 1);
    }
} 
