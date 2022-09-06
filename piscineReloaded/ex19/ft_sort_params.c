/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:59:21 by coder             #+#    #+#             */
/*   Updated: 2022/08/30 00:54:26 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	put_args(char **argv, int argc)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*aux;
	int		find;
	int		i;

	find = 1;
	while (find < argc)
	{
		i = find + 1;
		while (i < argc)
		{
			if (ft_strcmp(argv[find], argv[i]) > 0)
			{
				aux = argv[find];
				argv[find] = argv[i];
				argv[i] = aux;
			}
			i++;
		}
		find++;
	}
	put_args(argv, argc);
	return (0);
}
