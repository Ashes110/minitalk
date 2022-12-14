/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atito <atito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:27:08 by atito             #+#    #+#             */
/*   Updated: 2022/12/14 16:08:44 by atito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	sent_message(int signal)
{
	static int	bit;
	static int	c;

	if (signal == SIGUSR1)
		c |= (0x01 << bit);
	bit += 1;
	if (bit == 8)
	{
		ft_putchar_fd(c, 1);
		bit = 0;
		c = 0;
	}
}

int	main(void)
{
	pid_t	s_pid;

	s_pid = getpid();
	ft_putstr_fd("Server PID : ", 1);
	ft_putnbr_fd(s_pid, 1);
	ft_putchar_fd('\n', 1);
	while (1)
	{
		signal(SIGUSR1, sent_message);
		signal(SIGUSR2, sent_message);
		pause();
	}
	return (0);
}
