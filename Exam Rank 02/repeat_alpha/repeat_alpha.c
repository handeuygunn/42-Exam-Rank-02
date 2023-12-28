#include <unistd.h>
int main(int argc, char **argv){
    int i;
    int x;
    int y = 0;

    i = 0;
    if(argc != 2)
        write(1, "\n", 1);
    else{
        while(argv[1][i])
        {
        if((argv[1][i] % 64 <= 26) && (argv[1][i] % 64 > 0))
        {
            x = argv[1][i] % 64;
            y = 0;
            while(y < x)
            {
                write(1, &argv[1][i], 1);
                y++;
            }
            i++;
        }
        
        else if((argv[1][i] % 96 <= 26) && (argv[1][i] % 96 > 0))
        {
            x = argv[1][i] % 96;
            y = 0;
            while(y < x)
            {
                write(1, &argv[1][i], 1);
                y++;
            }
            i++;
        }
        
        else
        {
            write(1, &argv[1][i], 1);
            i++;
            
        }
        }
        write(1, "\n", 1);
    }
}
