#include "../include/Solution_reverseKGroup.h"

using namespace std;

ListNode*  Solution_reverseKGroup::reverseKGroup(ListNode* head, int k){
    if (k<=1) return head;
    function <pair<ListNode*, ListNode*>(ListNode* head, ListNode* tail)>myReverse;
    myReverse = [](ListNode* head, ListNode* tail) {
        ListNode *prev = tail->next, *curr = head;
        while(prev != tail){
            ListNode* nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        return (pair<ListNode*, ListNode*>){tail, head};
    };
    ListNode *p = head, *l = head, *r = head;
    ListNode* hair = new ListNode;
    hair->next = head;
    ListNode* prev =hair;
    int i=0;
    while(p){
        ++i;
        if (i == k){
            i = 0;
            r = p;
            tie(l, r) = myReverse(l, r);
            prev->next = l;
            prev = r;
            l = r->next;
            p = l;

        }
        else{
            p = p->next;
        }
        
    }
    return hair->next;

};
