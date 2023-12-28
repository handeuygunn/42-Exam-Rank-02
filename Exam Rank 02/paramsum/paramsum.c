#include <unistd.h>
int ft_putnbr(char x){
    if(x > 9)
    {
     ft_putnbr(x / 10);
     ft_putnbr(x % 10);
    }
    else if(x < 10)
    {
        x += 48;
        write(1, &x, 1);
    }
    return(0);
}
int main(int argc, char **argv){
    int i;
    int sayac;

    sayac = -1;
    i = 0;
    while(argv[i])
    {
        i++;
        sayac++;
    }
    ft_putnbr(sayac);
    write(1, "\n", 1);
}
