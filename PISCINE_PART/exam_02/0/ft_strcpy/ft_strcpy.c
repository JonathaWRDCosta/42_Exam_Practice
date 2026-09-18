/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 14:09:41 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/17 15:18:08 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    while (*s2)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    return(s1);
}

int main(void)
{
    char dest[20] = "";
    char src[] = "Hello";

    printf("DEST %s | SRC %s\n", dest, src);
    ft_strcpy(dest, src);
    printf("DEST %s | SRC %s\n", dest, src);
}