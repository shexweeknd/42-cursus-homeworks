/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiny <tiny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:14:09 by tiny              #+#    #+#             */
/*   Updated: 2024/02/20 19:33:47 by tiny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_memcmp(void *s1, void *s2, int n)
{
    int source_ln;

    source_ln = 0;
    while (*(unsigned char *)(s1 + source_ln))
        source_ln++;
    if (++source_ln < n)
        exit(1);
    while (n--)
    {
        if (*(unsigned char*)s1++ > *(unsigned char*)s2++)
            return (1);
        else if (*(unsigned char*)s1++ < *(unsigned char*)s2++)
            return (-1);
    }
    return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char *s1 = "bonjeur";
    char *s2 = "bonjeur";
    int ret;
    int n = 7;

    ret = ft_memcmp(s1, s2, n);
    printf("%d\n", ret);    
    return (0);
}*/