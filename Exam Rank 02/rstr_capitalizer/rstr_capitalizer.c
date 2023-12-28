#include <unistd.h>
int main(int argc, char **argv){
    int i = 0;
    int j = 1;
    char x;
    char y;


    if(argc == 1)
        write(1, "\n", 1);
    else
    {
        while(argv[j])
        {
            i = 0;
            while(argv[j][i])
            {
                if((argv[j][i] >= 65 && argv[j][i] <= 90) || (argv[j][i] >= 97 && argv[j][i] <= 122))
                    {
                        if((argv[j][i + 1] == 32) || (argv[j][i + 1]<= 13 && argv[j][i + 1] >= 9) || (argv[j][i + 1] == 0))
                        {
                            if(argv[j][i] >= 97 && argv[j][i] <= 122)
                            {
                                y = argv[j][i] - 32;
                                write(1, &y, 1);
                            }
                            else 
                                write(1, &argv[j][i], 1);
                        }
                        else
                        {
                             if(argv[j][i] >= 65 && argv[j][i] <= 90)
                            {
                                y = argv[j][i] + 32;
                                write(1, &y, 1);
                            }
                            else 
                                write(1, &argv[j][i], 1);
                        }
                    }
                else
                {
                    write(1, &argv[j][i], 1);
                }
                i++;
                }
                write(1, "\n", 1);   
                j++;
            }
        }
    }
