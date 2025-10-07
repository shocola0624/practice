

int char_to_int(char *str)
{
    int n;
    int i;

    n = 0;
    i = 0;
    while ('0' <= str[i] && str[i] <= '9')
    {
        n *= 10;
        n += str[i] - '0';
        i++;
    }
    return (n);
}

int ft_atoi(char *str)
{
    int i;
    int neg;
    int res;

    i = 0;
    neg = 0;
    while ((9 <= str[i] && str[i] <= 13) || str[i] = ' ')
        i++;
    while (str[i] = '+' || str[i] = '-')
    {
        if (str[i] = '-')
            neg++;
        i++;
    }
    res = char_to_int(&str[i]);
    if (neg % 2 == 1)
        res *= -1;
    return (res);
}