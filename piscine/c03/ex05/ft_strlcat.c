unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int dest_len;
    unsigned int src_len;

    i = 0;
    dest_len = 0;
    src_len = 0;
    while (dest[dest_len] && dest_len < size)
        dest_len++;
    while (src[src_len])
        src_len++;
    if (dest_len == size)
        return (size + src_len);
    while (i < size - dest_len - 1 && src[i])
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = 0;
    return (dest_len + src_len);
}