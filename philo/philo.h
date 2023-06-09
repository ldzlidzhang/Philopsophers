/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidzhang <lidzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 08:33:43 by lidanzhang        #+#    #+#             */
/*   Updated: 2023/06/08 13:57:01 by lidzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <pthread.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>

/*
Each philosopher is a struct containing their own ID, thread, a pointer 
to their left and right forks (mutexes), and other parameters. We'll also 
initialize the number of meals they've eaten to 0. We create a new thread 
for each philosopher:
*/
typedef struct s_philosopher
{
	int				id;
	pthread_t		thread;
	pthread_mutex_t	*left_fork;
	pthread_mutex_t	*right_fork;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				meals_eaten;
}				t_philosopher;

/* ft_str.c*/
int		ft_atoi(const char *str);

#endif