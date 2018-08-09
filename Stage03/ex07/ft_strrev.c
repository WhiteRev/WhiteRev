int		ft_strlen(char *str)
{
	int i;
	i = 0;
	 while (str[i] != '\0')
	{
		 i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	char	tmp;
	int	 i;
	int j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[j] = tmp;
		j--;
		i++;
	}
	return(str);
}
