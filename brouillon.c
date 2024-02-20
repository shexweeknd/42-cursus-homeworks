/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brouillon.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiny <tiny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:06:58 by tiny              #+#    #+#             */
/*   Updated: 2024/02/20 18:42:56 by tiny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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