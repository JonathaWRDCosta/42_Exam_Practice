/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 14:58:09 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/15 15:47:52 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
    int count = 0;

    while (*str)
    {
        if (*str >= 97 && *str <= 122)
            count = *str - 97 + 1;
        else if (*str >= 65 && *str <= 90)
            count = *str - 65 + 1;
        else
            count = 1;

        while (count > 0)
        {
            write(1, str, 1);
            count--;
        }
        str++;
    }
}

int main(void)
{
    repeat_alpha("abc");
    return(0);
}