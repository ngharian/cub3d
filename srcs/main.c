/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main .c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrichir <jrichir@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:39:26 by ngharian          #+#    #+#             */
/*   Updated: 2025/04/03 12:40:50 by jrichir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cube.h"

static int	open_file(char *file)
{
	int	len_file;
	int	fd;

	len_file = ft_strlen(file);
	if (len_file < 5 || file[len_file - 1] != 'b' || file[len_file - 2] != 'u'
		|| file[len_file - 3] != 'c' || file[len_file - 4] != '.')
		free_print_exit_error("The filename should be of '<name>.cub' form.",
			NULL, NULL);
	fd = open(file, O_RDONLY);
	if (fd < 0)
		free_print_exit_error("Please enter a valid filename.", NULL, NULL);
	return (fd);
}

int	main(int argc, char *argv[])
{
	t_info	*infos;
	int		fd;

	if (argc > 2 || argc < 2)
		free_print_exit_error("Wrong number of arguments.", NULL, NULL);
	fd = open_file(argv[1]);
	infos = malloc(sizeof(t_info));
	if (infos == NULL)
		free_print_exit_error("Malloc failure", NULL, NULL);
	parsing(infos, fd);
	infos->rc = malloc(sizeof(t_rc));
	if (infos->rc == NULL)
		free_print_exit_error("Malloc failure", infos, NULL);
	infos->start_time = get_time_ms();
	start_rendering(infos);
	ft_free(infos, -1);
	return (0);
}
