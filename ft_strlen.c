/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caglasener <caglasener@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:10:28 by caglasener        #+#    #+#             */
/*   Updated: 2025/04/17 23:20:27 by caglasener       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int    ft_strlen(char *str)
{
    int i ;
    i = 0;
    
    while(str[i] != '\0')
    {
        i ++ ;
    }
    return i ;
    
}

int main()
{
    char str[] = "hello";
    int len = ft_strlen(str);
    printf("%d", len);
    
    return 0;
}