/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thinguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 16:38:16 by thinguye          #+#    #+#             */
/*   Updated: 2019/08/31 16:41:14 by thinguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "hdrs.h"
#include <stdlib.h>

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		rush_zr(atoi(argv[1]), atoi(argv[2]));
		//rush_ft(5, 5);
		//rush_nd(5, 5);
		//rush_rd(5, 5);
		//rush_th(5, 5);
	}
	return (0);
}