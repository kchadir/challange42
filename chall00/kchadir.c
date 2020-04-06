int ft_strlen(char *s)
{
    int i;

    i = 0;
    if (s)
        while(s[i])
            i++;
    return (i);
}

int ft_necklace(char *s1, char *s2)
{
    int i;
    int j;
    int len;

    i = -1;
    if ((len = ft_strlen(s1)) == ft_strlen(s2))
    {
        if (len == 0)
            return (1);
        while (s1[++i])
        {
            if (s1[i] == s2[0])
            {
                j = 0;
                while(s1[(i + j) % len] == s2[j] && s2[j])
                    j++;
            }
            if (j == len)
                return (1);
        }
    }
    return (0);
}
