#include "../include/Solution_findMedianSortedArrays.h"
#include <vector>

using namespace std;

int Solution_findMedianSortedArrays::getKthElement(const vector<int> &nums1, const vector<int> &nums2, int k){
    int m = nums1.size(), n = nums2.size();
    int index1 = 0, index2 = 0;
    int tmp_index1 = 0, tmp_index2 = 0;
    while(true){
        if (index1 == m){
            return nums2[index2 + k -1];
        }
        if (index2 == n){
            return nums1[index1 + k -1];
        }
        if (k == 1){
            return min(nums1[index1], nums2[index2]);
        }
        tmp_index1 = min(m-1, index1 + k/2 - 1);
        tmp_index2 = min(n-1, index2 + k/2 - 1);
        if (nums1[tmp_index1] <= nums2[tmp_index2]){
            k -= tmp_index1 - index1 + 1;
            index1 = tmp_index1 + 1;
        }
        else{
            k -= tmp_index2 - index2 + 1;
            index2 = tmp_index2 + 1;
        }

    }
};      

double Solution_findMedianSortedArrays::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
    int total_len = nums1.size() + nums2.size();
    if (total_len % 2 == 1){
        return getKthElement(nums1, nums2, total_len / 2 + 1);
    } 
    else{
        return (getKthElement(nums1, nums2, total_len / 2) + getKthElement(nums1, nums2, total_len / 2 + 1)) / 2.0;
    }
};