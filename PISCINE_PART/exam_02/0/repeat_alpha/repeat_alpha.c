/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 15:19:23 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/17 15:31:15 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int count = 0;

    if (argc != 2)
        return(write(1, "\n", 1));
    while(argv[1][i])
    {
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            count = argv[1][i] - 'a' + 1;
        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            count = argv[1][i] - 'A' + 1;
        else
            count = 1;
        while (count--)
            write(1, &argv[1][i], 1);
        i++;
    }
    return(write(1, "\n", 1));
}