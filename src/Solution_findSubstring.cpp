#include "../include/Solution_findSubstring.h"
#include "unordered_map"


using namespace std;

vector<int> Solution_findSubstring::findSubstring(string s, vector<string>& words){
    int m = s.size(), n = words.size(), len = words[0].size();
    unordered_map<string, int>collect;
    for(auto &word : words){
        ++collect[word];
    }
    vector<int> index;
    for (int i=0, j = 0; i < m - n * len +1; ++i){
        unordered_map<string, int> sub;
        for (j = 0; j < n; ++j){
            auto word = s.substr(i + j * len, len);
            if (!collect.count(word)) break;
            if (++sub[word] > collect[word]) break;
        }
        if (j == n) index.push_back(i);
    }
    return index;
};
