/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 21:05:18 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/10 21:10:27 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 1)
        return(write(1, "\n", 1));
    while (*argv[1])
    {
        write(1, argv[1], 1);
        argv[1]++;
    }
    return(0);
}