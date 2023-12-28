int ft_control(char c, int str_base){
    if((c >= '0' && c <= '9') &&  (c < (str_base + 48)))
    {
        return(1);
    }
    return(0);
}

int ft_control02(char c, int str_base)
{
    str_base += 87;
    if((c >= 'a' && c <= 'f') && c < str_base)
    {
        return(1);
    }
    else if((c >= 'A' && c <= 'F') && (c < (str_base - 31)))
    {
        return(1);
    }
    return(0);
}
int     ft_atoi_base(const char *str, int str_base){
    int i;
    int nb;
    int result;

    i = 0;
    nb = 1;
    result = 0;
    while(str[i] == 32 || (str[i] >= 8 && str[i] <= 13))
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            nb *= -1;
        i++;
    }
    while(str[i] && ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F')))
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            if(ft_control(str[i], str_base) == 1)
                {
                    result = (result * str_base) + (str[i] - 48);
                }
        }
        else if(str[i] >= 'a' && str[i] <= 'f')
        {
            if(ft_control02(str[i], str_base) == 1)
                {
                    result = (result * str_base) + (str[i] - 87);
                }
        }
        else if(str[i] >= 'A' && str[i] <= 'F')
        {
            if(ft_control02(str[i], str_base) == 1)
                {
                    result = (result * str_base) + (str[i] - 55);
                }
        }
        i++;
    }
    return(result * nb);
}

