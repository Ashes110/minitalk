/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atito <atito@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:27:48 by atito             #+#    #+#             */
/*   Updated: 2022/12/14 16:09:14 by atito            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	send_message(pid_t pid, char c)
{
	int	bit;
	int	flag;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (0x01 << bit)) != 0)
			flag = kill(pid, SIGUSR1);
		else
			flag = kill(pid, SIGUSR2);
		if (flag == -1)
			exit(1);
		bit++;
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;

	if (argc != 3 || argv[1][0] == '-' || !ft_strlen(argv[2]))
		exit(1);
	pid = ft_atoi(argv[1]);
	if (pid < 100 || pid > 99998)
		exit(1);
	while (*argv[2])
		send_message(pid, *argv[2]++);
	return (0);
}
