/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caglasener <caglasener@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 01:38:13 by caglasener        #+#    #+#             */
/*   Updated: 2025/04/17 01:52:48 by caglasener       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char    *ft_strcpy(char *str1, char *str2)
{

    int i;
    i = 0;
    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    

    return str2;
}
int main ()
{
    char str1[] = {"merhaba"};
    char str2[50];
    
    ft_strcpy(str1,str2);
    
    printf("metin: %s\n",str2);
    return 0;
}