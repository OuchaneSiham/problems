/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prb2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:14:55 by souchane          #+#    #+#             */
/*   Updated: 2023/12/26 15:16:11 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
// i have no idea what doing on here
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int complement;
    int i ;
    i = 0;
    int *res =(int*)malloc(2 * sizeof(int));
    if (!res)
    return NULL;
    int *numDict = (int*)malloc(numsSize * sizeof(int));
    if (!numDict)
    return NULL;
    while(i < numsSize)
    {
     numDict[i] = 0;
     i++;
    }
    i = 0;
    while(i < numsSize)
    {
        complement = target - nums[i];
        numDict[nums[i]] = i + 1;
        if (numDict[complement] != 0)
        {
            res[0] = numDict[complement] - 1;
            res[1] = i;
            *returnSize = 2;
            return res;
        }
        i++;
    }
    *returnSize = 0;
    return NULL;
}
// int main() 
// {
//     int nums1[] = {2, 55, 50, 30};
//     int target1 = 110;
    
//     int returnSize1;
//     int* result1 = twoSum(nums1, 4, target1, &returnSize1);
    
//     printf("[%d, %d]\n", result1[0], result1[1]);

//     return 0;
// }
