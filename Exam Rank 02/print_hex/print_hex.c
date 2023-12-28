#include <unistd.h>
#include <stdlib.h>

void    ft_putnbr_hex(unsigned int x){
    if(x < 10)
    {
        x += 48;
        write(1, &x, 1);
    }
    else if(x > 9 && x < 16)
    {
        x += 87;
        write(1, &x, 1);
    }
    else
    {
        ft_putnbr_hex(x / 16);
        ft_putnbr_hex(x % 16);
    }
}

unsigned int ft_atoi_for_my_func(char const *str){
    int i;
    unsigned int x;
    unsigned int result;

    i = 0;
    result = 0;
    while(str[i])
    {
        x = str[i] - 48;
        result =(result * 10) + x;
        i++;
    }
    return(result);
}
int main(int argc, char *argv){
    unsigned int x;
    if(argc != 2)
        write(1, "\n", 1);
    else
    {
        x = ft_atoi_for_my_func(argv[1]);
        ft_putnbr_hex(x);
        write(1, "\n", 1);
    }
}