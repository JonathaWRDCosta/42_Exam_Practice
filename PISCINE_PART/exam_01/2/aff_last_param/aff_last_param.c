/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 21:15:14 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/15 14:38:50 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 1)
        return(write(1, "\n", 1));
    while (argv[argc - 1][i])
    {
        write(1, &argv[argc - 1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}

