/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidzhang <lidzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:33:43 by lidzhang          #+#    #+#             */
/*   Updated: 2023/06/09 13:46:00 by lidzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

/*
[0]num_philos [1]time_to_die [2]time_to_eat [3]time_to_sleep [4]num_meals
*/
static void	*input_check(int argc, char **argv, int	*dest)
{
	if (argc > 4 && argc < 7)
	{
		dest[0] = ft_atoi(argv[1]);
		dest[1] = ft_atoi(argv[2]);
		dest[2] = ft_atoi(argv[3]);
		dest[3] = ft_atoi(argv[4]);
		if (argc == 6)
			dest[4] = ft_atoi(argv[5]);
		if (argc == 5)
			dest[4] = -1;
		return (dest);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	dest[5];

	dest[5] = {0};
	input_check(argc, argv, dest);
	if (!dest[0])
	{
		printf("Usage: %s num_philos t_die t_eat t_sleep (num_meals)\n",
			argv[0]);
		rerurn(-1);
	}
	return (0);
}
