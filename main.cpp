#include <iostream>
#include <vector>
#include <string>
#include "include/utils.h"
#include "include/Solution_countBits.h"
#include "include/Solution_findMedianSortedArrays.h"
#include "include/Solution_isMatch.h"
#include "include/Solution_isMatch_2.h"
#include "include/Solution_mergeKLists.h"
#include "include/Solution_reverseKGroup.h"
#include "include/Solution_longestValidParentheses.h"
#include "include/Solution_firstMissingPositive.h"
#include "include/Solution_trap.h"

using namespace std;


int main(int argc,char *argv[])
{
    cout << "countBits: " << endl;
    Solution_countBits s1;
    int n=2;
    vector<int> ret1 = s1.countBits(n);
    cout << "results from countBits: " << endl;
    for (int i=0;i<n+1;++i){
        cout << ret1[i] << ", ";
    }
    cout << endl;


    cout << "findMedianSortedArrays: " << endl;
    Solution_findMedianSortedArrays s2;
    vector<int> nums1{2};
    vector<int> nums2{1, 3, 4};
    double ret2 = s2.findMedianSortedArrays(nums1, nums2);
    cout << "result from findMedianSortedArrays: " << endl;
    cout << ret2 << endl;

    cout << "isMatch: " << endl;
    Solution_isMatch s3;
    string s = "ab", p = ".*";
    bool ret3 = s3.isMatch(s, p);
    cout << ret3 << endl;

    cout << "mergeKLists: " << endl;
    Solution_mergeKLists s4;
    vector<int>vec1{1, 4, 5};
    vector<int>vec2{1, 3, 4};
    vector<int>vec3{2, 6};
    vector<ListNode*>input1{vec2ListNode(vec1), vec2ListNode(vec2), vec2ListNode(vec3)};
    vector<int>ret4(ListNode2vec(s4.mergeKLists(input1)));
    for (auto item : ret4){
        cout << item << ",";
    }
    cout << endl;

    cout << "reverseKGroup: " << endl;
    Solution_reverseKGroup s5;
    vector<int> vec5{1, 2, 3, 4, 5};
    int k = 2;
    vector<int> ret5 (ListNode2vec(s5.reverseKGroup(vec2ListNode(vec5), k)));
    for (auto item : ret5){
        cout << item << ",";
    }
    cout << endl;

    cout << "findSubstring: Test in Leetcode URL." << endl;

    cout << "longestValidParentheses: Test in Leetcode URL." << endl;
    

    cout << "firstMissingPositive" << endl;
    vector<int> vec6{7, 8, 9, 11, 12};
    Solution_firstMissingPositive s6;
    int ret6 = s6.firstMissingPositive(vec6);
    cout<< ret6 << endl;

    cout << "trap" << endl;
    vector<int> height1{4, 2, 0, 3, 2, 5};
    Solution_trap s7;
    int ret7 = s7.trap(height1);
    cout<< ret7 << endl;

    cout << "isMatch_2: " << endl;
    Solution_isMatch_2 s3_2;
    string ss= "adceb", pp = "*a*b";
    bool ret3_2= s3_2.isMatch(ss, pp);
    cout << ret3_2 << endl;

    return 0;
}


