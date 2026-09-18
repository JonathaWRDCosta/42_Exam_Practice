/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 19:41:02 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/15 19:45:49 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    if (argc != 2)
        return(write(1, "\n", 1));
    while (argv[1][i])
    {
        if (argv[1][i] >= 65 && argv[1][i] <= 90)
            argv[1][i] = argv[1][i] + 32;
        else if (argv[1][i] >= 97 && argv[1][i] <= 122)
            argv[1][i] = argv[1][i] - 32;
        write(1, &argv[1][i], 1);
        i++;
    }
}
