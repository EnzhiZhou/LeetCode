#include "../include/Solution_longestValidParentheses.h"

#include <stack>

using namespace std;

int Solution_longestValidParentheses::longestValidParentheses(string s){
    int n = s.size();
    if (n <= 1) return 0;
    stack<int> store;
    store.push(-1); //设置哨兵）的索引为-1
    int max_len=0;
    for (int i = 0; i < n; ++i){
        if (s[i] == '('){
            store.push(i);
        }
        else{
            store.pop();
            if (store.empty()){
                store.push(i);
            }
            else{
                max_len = max(max_len, i - store.top());
            }
        }
    }
    return max_len;
};