#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int compare(const void* a, const void* b)
{
    int a_val = *(const int*) a;
    int b_val = *(const int*) b;

    if(a_val>b_val) {return 1;}
    if(b_val>a_val) {return -1;}
    return 0;
}

bool containsDuplicate(int* nums, int numsSize) {

    qsort(nums, numsSize, sizeof(int), compare);
    for(size_t i = 0; i< numsSize-1; i++)
    {
        if (nums[i]==nums[i+1])
        {
            return true;
        }
    }
    
    return false;
}