int is_power_of_2(unsigned int n){
    unsigned long int i;

    i = 1;
    if (n < 0)
        return(0);
    else if(n == 1)
        return(1);
    else if (n > 1)
    {
        while(i <= n)
        {
            i *= 2;
            if(i == n)
                return(1);
        }
        return(0);
    }
    return (0);
} 
