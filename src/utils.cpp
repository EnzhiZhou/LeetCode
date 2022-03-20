#include "../include/utils.h"
#include <vector>

using namespace std;

// template <typename T>
// ListNode* vec2ListNode(vector<T> vec){
ListNode* vec2ListNode(vector<int> vec){
    int m = vec.size();
    if (m == 0) return (ListNode*) nullptr;
    ListNode head, *tail = &head; 
    for (auto item : vec){
        tail->next = new ListNode;
        tail = tail->next;
        tail->val = item;
    }
    return head.next;
};

// template <typename T>
// vector<T> ListNode2vec(ListNode* list){
vector<int> ListNode2vec(ListNode* list){
    if (!list) return {};
    ListNode* p = list;
    vector<int> vec;
    while (p){
        vec.push_back(p->val);
        p = p->next;
    }
    return vec;
};