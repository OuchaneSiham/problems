/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prb4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:02:20 by souchane          #+#    #+#             */
/*   Updated: 2023/12/27 19:08:15 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int find_max(int arr[], int len)
{
    int i;
    i = 0;
    int max;
    max = arr[0];
    while(i < len)
    {
        if(arr[i] > max)
        max = arr[i];
        i++;
    }
    return max;
}

// int main()
// {
//     int myArray[] = {5, 2, 8, 1, 6956};
//     int x = find_max(myArray, 5);
//     printf("%d", x);
// }
