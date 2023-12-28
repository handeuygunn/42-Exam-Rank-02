#include <unistd.h>
void    print_bits(unsigned char octet){
    int x;
    int i ;

    i = 7;
    
    while (i >= 0)
    {
        x = (octet >> i) & 1;
        x =  x + 48;
        write(1, &x, 1);
        i--;
    }
    
}
