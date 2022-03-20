#include "../include/Solution_firstMissingPositive.h"

using namespace std;

int Solution_firstMissingPositive::firstMissingPositive(vector<int>& nums){
    int n = nums.size();
    for (int i = 0; i < n; ++i){
        if (nums[i] <= 0){
            nums[i] = n+1;
        }
    }
    int num = 0;
    for (int i = 0; i < n; ++i){
        num = abs(nums[i]);
        if (num < n+1 ){
            nums[num - 1] = -1 * abs(nums[num - 1]);
        }
    }
    for (int i = 0; i < n; ++i){
        if (nums[i] >0 ){
            return i + 1;
        }
    }
    return n+1;

};