/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiny <tiny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:06:10 by tiny              #+#    #+#             */
/*   Updated: 2024/02/20 18:52:36 by tiny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void *str, int c, int b_size)
{
    char *ret;

    ret = 0;
    while(b_size--)
    {
        if (*(unsigned char *)str == c)
        {
            ret = (char *)str++;
            break;
        }
        else
            str++;
    }
    return (ret);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
    char *s = "bonjour je fais parti de l'elite";
    char *ret;
    char c = 'e';
    int n = 9;

    ret = memchr(s, c, n);
    printf("%s\n", ret);    
    return (0);
}