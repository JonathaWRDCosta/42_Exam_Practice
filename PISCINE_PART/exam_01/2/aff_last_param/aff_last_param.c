/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 21:15:14 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/10 21:26:13 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 1)
        return(write(1, "\n", 1));

    while (argv[argc - 1])
    {
        write(1, &argv[argc - 1], 1);
    }
}