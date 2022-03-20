#include "../include/Solution_mergeKLists.h"
#include <vector>

using namespace std;

ListNode* Solution_mergeKLists:: mergeKLists(vector<ListNode*> lists){
    int m =lists.size();
    if (m==0){
        return nullptr;
    }
    if (m==1){
        return lists[0];
    }
    
    auto mergeTwoLists = [](ListNode* list1, ListNode* list2){
        if (!list1 || !list2){
            return list1 ? list1 : list2;
        }
        ListNode head, *tail = &head, *aptr = list1, *bptr = list2;
        while(aptr && bptr){
            if (aptr->val <= bptr->val){
                tail->next = aptr;
                aptr = aptr->next;
            }
            else{
                tail->next = bptr;
                bptr = bptr->next;
            }
            tail = tail->next;
        }
        tail->next = aptr ? aptr : bptr;
        return head.next;
    };

    function<ListNode*(int l, int r)>merge;
    merge = [&](int l, int r){
        if (l == r) return lists[l];
        if (l > r) {
            return (ListNode*)nullptr;
        }
        int mid = (l + r) >> 1;
        return mergeTwoLists(merge(l, mid), merge(mid + 1, r));
    };

    return merge(0, m);

    // ListNode *ans = nullptr;
    // for (auto node : lists){
    //     ans = mergeTwoLists(ans, node);
    // }
    // return ans;

};
