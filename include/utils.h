#ifndef UTILS_H
#define UTILS_H

#include <vector>

using namespace std;


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode {
     int val;
     ListNode *next; 
};


// template <typename T>
// ListNode* vec2ListNode(vector<T> vec);

// template <typename T>
// vector<T> ListNode2vec(ListNode* list);

ListNode* vec2ListNode(vector<int> vec);

vector<int> ListNode2vec(ListNode* list);

#endif