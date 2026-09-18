/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 15:48:26 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/15 19:37:38 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    if (argc != 4)
        return(write(1, "\n", 1));
    while (argv[1][i])
    {
        if(argv[1][i] == argv[2][0])
            argv[1][i] = argv[3][0];
        write(1, &argv[1][i], 1);
        i++;
    }
}