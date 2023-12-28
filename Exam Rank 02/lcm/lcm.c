unsigned int    lcm(unsigned int a, unsigned int b)
{
    int carpim;
    int ebob;
    int asal;
    int d = a;
    int e = b;
    carpim = a * b;
    asal = 2;
    ebob = 1;
    if(d < 0 || e < 0)
        return(0);
    else
    {
        while(a != 1 && b != 1 && asal <= a && asal <= b)
        {
            while(a % asal == 0 && b % asal == 0)
            {
                a /= asal;
                b /= asal;
                ebob *= asal;
            }
            asal++;
        }
        return(carpim/ebob);
    }
}
