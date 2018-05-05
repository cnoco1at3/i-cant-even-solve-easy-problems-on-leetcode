/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int * twoSum(int * nums, int numsSize, int target) {
    int * r = malloc(2 * sizeof(int));
    int * tmp;
    int max = nums[0];
    int min = nums[0];
    int span = 0;
    for (int i = 1; i < numsSize; ++i) {
        if (nums[i] > max) {
            max = nums[i];
        } else if (nums[i] < min) {
            min = nums[i];
        }
    }
    span = max - min + 1;
    tmp = malloc(span * sizeof(int));
    memset(tmp, 0, span * sizeof(int));
    for (int i = 0; i < numsSize; ++i) {
        if (target - nums[i] > max || target - nums[i] < min) {
            tmp[nums[i] - min] = i + 1;
            continue;
        }
        if (tmp[target - nums[i] - min] > 0) {
            r[0] = tmp[target - nums[i] - min] - 1;
            r[1] = i;
            break;
        }
        tmp[nums[i] - min] = i + 1;
    }
    return r;
}