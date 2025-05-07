/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caglasener <caglasener@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 21:55:58 by caglasener        #+#    #+#             */
/*   Updated: 2025/04/17 22:08:53 by caglasener       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void aff_first_param(int argc, char *argv[])
{
    int i ;
    i = 0;
    if(argc >= 2)
    {
        while(argv[1][i])
        {
            write(1 , &argv[1][i] , 1);
            i ++ ;
        }
    }
    else if (argc == 1)
    {
        write(1, "\n", 1);
    }
    
}

int main(int argc, char *argv[])
{
    aff_first_param(argc, argv);
    return 0;
}