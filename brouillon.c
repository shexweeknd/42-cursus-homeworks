/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brouillon.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiny <tiny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:06:58 by tiny              #+#    #+#             */
/*   Updated: 2024/02/20 19:32:47 by tiny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int main(void)
{
    char *s1 = "bonjeur";
    char *s2 = "bonjeur";
    int ret;
    int n = 8;

    ret = memcmp(s1, s2, n);
    printf("%d\n", ret);    
    return (0);
}