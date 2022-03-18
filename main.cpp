#include <iostream>
#include <vector>
#include <string>
#include "../include/Solution_countBits.h"
#include "../include/Solution_findMedianSortedArrays.h"
// #include "include/Solution_isMatch.h"

using namespace std;

bool isMatch(string s, string p){
    int m = s.size(), n = p.size();

    // auto matches = [&](int i, int j){
    //     if (i == 0 || j == 0){
    //         return false;
    //     }
    //     if(p[j] == '.'){
    //         return true;
    //     }
    //     return s[i] == p[j];
    // };

    auto matches = [&](int i, int j) {
        if (i == 0) {
            return false;
        }
        if (p[j - 1] == '.') {
            return true;
        }
        return s[i - 1] == p[j - 1];
    };

    return matches(0 ,0);

    // vector< vector<bool> > dp(m + 1,vector<bool>(n + 1, false));
    // for (int i = 0; i <= m; ++i){
    //     for (int j = 0; j <= n; ++j){
    //         if (p[j-1] == '*'){
    //             dp[i][j] = dp[i][j-2] || (dp[i-1][j] && matches(i, j));
    //         }
    //         else{
    //             dp[i][j] = dp[i-1][j-1] && matches(i, j);
    //         }
    //     }
    // }

    // return dp[m][n];
};

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
    vector<int> nums1(1);
    vector<int> nums2(3);
    nums1[0] = 2;
    nums2[0] = 1, nums2[1] = 3 , nums2[2] = 4;
    double ret2 = s2.findMedianSortedArrays(nums1, nums2);
    cout << "result from findMedianSortedArrays: " << endl;
    cout << ret2 << endl;

    cout << "isMatch: " << endl;
    // Solution_isMatch s3;
    string s = "ss", p = "sp";
    // bool ret3 = s3.isMatch(s, p);
    cout << isMatch(s, p) << endl;


    // cout << "result: " << isMatch(0, 0);
    return 0;
}


