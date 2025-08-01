#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

bool containsDuplicate(int *nums, int numsSize)
{
    if (numsSize <= 1)
        return false;

    qsort(nums, numsSize, sizeof(int), compare);

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            return true;
        }
    }

    return false;
}

int main()
{
    // Teste
    int nums[] = {1, 2, 3, 1};
    int size = 4;
    printf("%s\n", containsDuplicate(nums, size) ? "true" : "false");
    return 0;
}