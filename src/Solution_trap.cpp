#include "../include/Solution_trap.h"

#include <vector>
#include <stack>

using namespace std;

int Solution_trap:: trap(vector<int>& height){
    int n = height.size();
    stack<int> stk;
    int ans = 0;
    for (int i = 0; i < n; ++i){
        while (!stk.empty() && height[stk.top()] < height[i]){
            int index = stk.top();
            stk.pop();
            if (stk.empty()) break;
            ans += (min(height[i], height[stk.top()]) - height[index]) * (i - stk.top() -1);
        }
        stk.push(i);
    }
    return ans;
};


