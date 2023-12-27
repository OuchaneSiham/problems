/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prb3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:16:51 by souchane          #+#    #+#             */
/*   Updated: 2023/12/27 19:06:49 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
// int main(void)
// {
//     int arr[] = {6, 20, 55, 60, 88, 4};
//     int min;
//     int i;
//     i = 0;
//     min = arr[0];
//     while(i < 6 )
//     {
//         if(arr[i] < min)
//         min = arr[i];
//         i++;
        
//     }
//     printf("%d", min);
// }
int find_min(int arr[],  int len)
{
    int min;
    int i;
    i = 0;
    min = arr[0];
    while(i < len )
    {
        if(arr[i] > min)
        min = arr[i];
        i++; 
    }
    return min;
}
// int main(){
//     int arr1[] = {11, 0 , 66, 9, 80};
//     int arr2[] = {1, 900, 666};
//     int a = find_min(arr1, 5);
//     int b = find_min(arr2, 3);
//     printf("%d\n", a);
//     printf("%d", b);
// }
